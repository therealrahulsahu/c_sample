#include <iostream>
#include <queue>
using namespace std;
class BST{
private:
    struct Tree{
        Tree(int v, Tree *l, Tree *r):value(v), left(l), right(r){}
        explicit Tree(int v):value(v),left(nullptr), right(nullptr){}
        int value;
        struct Tree *left, *right;
    };
    typedef struct Tree Tree;
    Tree *root;
    static Tree *add_node(Tree *head, int val){
        if(head== nullptr){
            return new Tree(val);
        } else if(val < head->value){
            head->left = add_node(head->left, val);
        } else if(val > head->value){
            head->right = add_node(head->right, val);
        }
    }
    static void DFS_L_r_R(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        DFS_L_r_R(node->left, result);
        *result+=to_string(node->value)+" ";
        DFS_L_r_R(node->right, result);
    }
    static void DFS_r_L_R(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        *result+=to_string(node->value)+" ";
        DFS_L_r_R(node->left, result);
        DFS_L_r_R(node->right, result);
    }
    static void DFS_L_R_r(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        DFS_L_r_R(node->left, result);
        DFS_L_r_R(node->right, result);
        *result+=to_string(node->value)+" ";
    }
    static void DFS_r_R_L(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        *result+=to_string(node->value)+" ";
        DFS_L_r_R(node->right, result);
        DFS_L_r_R(node->left, result);
    }
    static void DFS_R_r_L(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        DFS_L_r_R(node->right, result);
        *result+=to_string(node->value)+" ";
        DFS_L_r_R(node->left, result);
    }
    static void DFS_R_L_r(Tree *node, string *result){
        if(node== nullptr){
            return;
        }
        DFS_L_r_R(node->right, result);
        DFS_L_r_R(node->left, result);
        *result+=to_string(node->value)+" ";
    }
    static void BFS_LR(Tree *node, string *result){
        queue<Tree*> Q;
        if(node!= nullptr){
            Q.push(node);
        }
        while (!Q.empty()){
            Tree *curr = Q.front();
            Q.pop();
            *result += to_string(curr->value)+" ";
            if(curr->left!= nullptr)
                Q.push(curr->left);
            if(curr->right!= nullptr)
                Q.push(curr->right);
        }
    }
    static void BFS_RL(Tree *node, string *result){
        queue<Tree*> Q;
        if(node!= nullptr){
            Q.push(node);
        }
        while (!Q.empty()){
            Tree *curr = Q.front();
            Q.pop();
            *result += to_string(curr->value)+" ";
            if(curr->right!= nullptr)
                Q.push(curr->right);
            if(curr->left!= nullptr)
                Q.push(curr->left);
        }
    }
public:
    explicit BST(){
        root = nullptr;
    }
    void add(int val){
        root = add_node(root, val);
    }
    string DFS(string order){
        string result;
        if(order == "rLR")
            DFS_r_L_R(root, &result);
        else if (order == "LrR")
            DFS_L_r_R(root, &result);
        else if (order == "LRr")
            DFS_L_R_r(root, &result);
        else if (order == "rRL")
            DFS_r_R_L(root, &result);
        else if (order == "RrL")
            DFS_R_r_L(root, &result);
        else if (order == "RLr")
            DFS_R_L_r(root, &result);
        else
            result += "Wrong Order";
        return result;
    }
    string BFS(string order){
        string result;
        if(order == "L"){
           BFS_LR(root, &result);
        } else if(order == "R"){
            BFS_RL(root, &result);
        }else{
            result += "Wrong Order";
        }
        return result;
    }
    bool search(int n){
        Tree *trv = root;
        while (trv!= nullptr){
            if(trv->value == n){
                return true;
            } else if(n < trv->value){
                trv = trv->left;
            } else if (n > trv->value){
                trv = trv->right;
            }
        }
        return false;
    }
};
int main(){
    BST *B = new BST();
    B->add(5);
    B->add(3);
    B->add(7);
    B->add(2);
    B->add(4);
    B->add(6);
    B->add(9);
    cout<<B->search(5);
}