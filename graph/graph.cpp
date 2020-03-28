#include <iostream>
#include <utility>
#include <stack>
#include <queue>
using namespace std;
class Graph
{
public:
    class Error: public exception{
        string message;
    public:
        explicit Error(string msg=""){
            message = move(msg);
        }
        string get_message(){
            return message;
        }
    };
    class VerticesNotExists: public Error{
    public:
        explicit VerticesNotExists(string msg=""):Error(move(msg)){}
    };
    class InvalidInput: public Error{
    public:
        explicit InvalidInput(string msg=""):Error(move(msg)){}
    };
    class EdgeAlreadyExists: public Error{
    public:
        explicit EdgeAlreadyExists(string msg=""):Error(move(msg)){}
    };
    class EdgeNotExists: public Error{
    public:
        explicit EdgeNotExists(string msg=""):Error(move(msg)){}
    };
    class PathNotFound: public Error{
    public:
        explicit PathNotFound(string msg=""):Error(move(msg)){}
    };
private:
    struct Edge;
    struct Vertices{
        Vertices():value(-1), edges(nullptr){};
        explicit Vertices(int val):value(val), edges(nullptr){};
        int value;
        struct Edge *edges;
    };
    struct Edge{
        Edge():weight(0), to_node(nullptr), next(nullptr){};
        explicit Edge(int wg, struct Vertices *dist):weight(wg), to_node(dist), next(nullptr){};
        int weight;
        struct Vertices *to_node;
        struct Edge *next;
    };
    typedef struct Vertices Vertices;
    typedef struct Edge Edge;
    int no_nodes;
    Vertices **v_list = nullptr;
    static Edge *add_node_in_end(Edge *head, int weight, Vertices *addr){
        Edge *node = new Edge(weight, addr);
        if(head == nullptr){
            head = node;
        }else{
            Edge *ptr=head;
            for(;ptr->next != nullptr;ptr=ptr->next){
                if(ptr->to_node->value == addr->value){
                    throw EdgeAlreadyExists();
                }
            }
            if(ptr->to_node->value == addr->value){
                throw EdgeAlreadyExists();
            }
            ptr->next = node;
        }
        return head;
    }
    static void delete_edge_list(Edge *head){
        if(head == nullptr){
            return;
        }else if(head->next == nullptr){
            delete head;
        }else{
            delete_edge_list(head->next);
        }
    }
    static int false_min_node(int const *data, bool const *visit, int n){
        int min_ind = -1;
        int min = INT32_MAX;
        for (int i = 0; i < n; ++i) {
            if(min > data[i] && !visit[i]){
                min = data[i];
                min_ind = i;
            }
        }
        return min_ind;
    }
public:
    explicit Graph(int n){
        if(n < 1){
            throw InvalidInput("No. of nodes must be more than 0");
        }
        no_nodes = n;
        v_list = new Vertices*[n];
        for (int i = 0; i < no_nodes; ++i) {
            v_list[i] = new Vertices(i);
        }
    }
    string print_vertices_list(){
        string result;
        for (int i = 0; i < no_nodes; ++i) {
            if(v_list[i] != nullptr) {
                result += to_string(v_list[i]->value) + " ";
            }
        }
        return result;
    }
    int get_weight(int start, int end){
        if( start < 0 || end < 0 || start >= no_nodes || end >= no_nodes){
            throw VerticesNotExists("Vertices should in between (1," + to_string(no_nodes) +")");
        }
        if(v_list[start] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(start)+" doesn't exists");
        }
        if(v_list[end] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(end)+" doesn't exists");
        }
        int result=0;
        bool found = false;
        for(Edge *ptr=v_list[start]->edges;ptr!=nullptr;ptr=ptr->next){
            if(ptr->to_node->value == end){
                result = ptr->weight;
                found = true;
                break;
            }
        }
        if(!found){
            throw EdgeNotExists("Edge (" + to_string(start) + "," + to_string(end) + ") Not Exists");
        }
        return result;
    }
    void add_edge(int start, int end, int weight=1){
        if( start < 0 || end < 0 || start >= no_nodes || end >= no_nodes){
            throw VerticesNotExists("Vertices should in between (1," + to_string(no_nodes) +")");
        }
        if(v_list[start] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(start)+" doesn't exists");
        }
        if(v_list[end] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(end)+" doesn't exists");
        }
        try{
            v_list[start]->edges = add_node_in_end(v_list[start]->edges, weight, v_list[end]);
        }catch (EdgeAlreadyExists &E){
            string msg = "Edge (" + to_string(start) + "," + to_string(end) + ") Already Exists";
            //throw EdgeAlreadyExists(msg);
            cout<<msg<<endl;
        }
    }
    string print_adjacency_list(){
        string result;
        for (int i = 0; i < no_nodes; ++i) {
            if(v_list[i] != nullptr){
                result += to_string(v_list[i]->value) + "-> ";
                for(Edge *ptr=v_list[i]->edges;ptr != nullptr;ptr=ptr->next){
                    result += to_string(ptr->to_node->value) + "(w:" + to_string(ptr->weight) + ") ";
                }
                result+="\n";
            }
        }
        return result;
    }
    void delete_edge(int start, int end){
        if( start < 0 || end < 0 || start >= no_nodes || end >= no_nodes){
            throw VerticesNotExists("Vertices should in between (1," + to_string(no_nodes) + ")");
        }
        if(v_list[start] == nullptr){
            throw VerticesNotExists("Vertices : " + to_string(start) + " doesn't exists");
        }
        if(v_list[end] == nullptr){
            throw VerticesNotExists("Vertices : " + to_string(end) + " doesn't exists");
        }
        Edge *head = v_list[start]->edges, *prev = head;
        if(head != nullptr && head->to_node->value == end){
            v_list[start]->edges = head->next;
            delete head;
            return;
        }
        while (head != nullptr && head->to_node->value != end){
            prev = head;
            head = head->next;
        }
        if(head == nullptr){
            throw EdgeNotExists("Edge (" + to_string(start) + "," + to_string(end) + ") Not Exists");
        }
        prev->next = head->next;
        delete head;
    }
    string BFS(int n){
        if(n < 0 || n >= no_nodes){
            string msg = "Vertices should between [0, "+to_string(no_nodes)+")";
            throw InvalidInput(msg);
        }
        if(v_list[n] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(n)+" doesn't exists");
        }
        string result;
        bool *visited = new bool[no_nodes]();
        //fill_n(visited, no_nodes, false);
        queue<Vertices*> Q;
        Q.push(v_list[n]);
        visited[v_list[n]->value] = true;
        while (!Q.empty()){
            Vertices *curr_node = Q.front();
            Q.pop();
            result += to_string(curr_node->value)+" ";
            for(Edge *ptr=curr_node->edges;ptr!= nullptr;ptr=ptr->next){
                if(!visited[ptr->to_node->value]){
                    Q.push(ptr->to_node);
                    visited[ptr->to_node->value] = true;
                }
            }
        }
        return result;
    }
    string DFS(int n){
        if(n < 0 || n >= no_nodes){
            string msg = "Vertices should between [0, "+to_string(no_nodes)+")";
            throw InvalidInput(msg);
        }
        if(v_list[n] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(n)+" doesn't exists");
        }
        string result;
        bool *visited = new bool[no_nodes]();
        //fill_n(visited, no_nodes, false);
        stack<Vertices*> Q;
        Q.push(v_list[n]);
        visited[v_list[n]->value] = true;
        while (!Q.empty()){
            Vertices *curr_node = Q.top();
            Q.pop();
            result += to_string(curr_node->value)+" ";
            for(Edge *ptr=curr_node->edges;ptr != nullptr;ptr=ptr->next){
                if(!visited[ptr->to_node->value]){
                    Q.push(ptr->to_node);
                    visited[ptr->to_node->value] = true;
                }
            }
        }
        return result;
    }
    void delete_vertices(int n){
        if( n < 0 || n >= no_nodes){
            throw VerticesNotExists("Vertices should in between (1," + to_string(no_nodes) +")");
        }
        if(v_list[n] == nullptr){
            throw VerticesNotExists("Vertices : "+to_string(n)+" doesn't exists");
        }
        for(int i=0;i<no_nodes;i++){
            if(v_list[i] != nullptr){
                try {
                    delete_edge(i, n);
                }catch (EdgeNotExists &E){}
            }
        }
        delete_edge_list(v_list[n]->edges);
        delete v_list[n];
        v_list[n] = nullptr;
    }
    int s_distance_dij(int start, int end){
        if( start < 0 || end < 0 || start >= no_nodes || end >= no_nodes){
            throw VerticesNotExists("Vertices should in between (1," + to_string(no_nodes) + ")");
        }
        if(v_list[start] == nullptr){
            throw VerticesNotExists("Vertices : " + to_string(start) + " doesn't exists");
        }
        if(v_list[end] == nullptr){
            throw VerticesNotExists("Vertices : " + to_string(end) + " doesn't exists");
        }
        int infinity = INT32_MAX;
        int *distance = new int[no_nodes];
        bool *visited = new bool[no_nodes]();
        fill_n(distance, no_nodes, infinity);
        distance[start] = 0;
        visited[start] = true;
        int pass = start;
        while(pass != -1){
            Vertices *node = v_list[pass];
            int from_in = node->value;
            for(Edge *ptr=node->edges;ptr!=nullptr;ptr=ptr->next){
                int to_in = ptr->to_node->value;
                int wt = ptr->weight;
                if(distance[to_in] > wt + distance[from_in]){
                    distance[to_in] = distance[from_in] + wt;
                }
            }
            pass = false_min_node(distance, visited, no_nodes);
            visited[pass] = true;
        }
        if(distance[end]==infinity){
            throw PathNotFound("Path Not Exists between ("+to_string(start)+","+to_string(end)+")");
        }
        return distance[end];
    }
};

int main(){
    try {
        Graph G = Graph(8);
        G.add_edge(0, 1, 1);
        G.add_edge(0, 2, 1);
        G.add_edge(0, 7, 20);
        G.add_edge(1, 1, 80);
        G.add_edge(1, 3, 3);
        G.add_edge(2, 7, 5);
        G.add_edge(2, 4, 3);
        G.add_edge(2, 6, 1);
        G.add_edge(3, 5, 5);
        G.add_edge(3, 7, 2);
        G.add_edge(4, 2, 1);
        G.add_edge(4, 6, 2);
        G.add_edge(5, 7, 1);
        G.add_edge(6, 7, 2);
        G.add_edge(7, 3, 1);
        G.add_edge(7, 0, 3);
        G.delete_vertices(5);
        cout<<G.s_distance_dij(1, 7);
    }catch (Graph::Error &E){
        cout<<E.get_message()<<endl;
    }
}
