#include <stdio.h>
#include <stdlib.h>
struct list{
    int data;
    struct list *next;
};
struct list* new_node(int val){
    struct list *node = calloc(1, sizeof(struct list));
    node->data = val;
    node->next = NULL;
    return node;
}
struct list *create_list(int *array, int n){
    struct list *head = NULL, *traverse=NULL;
    for (int i = 0; i < n; ++i) {
        struct list *temp = new_node(array[i]);
        if(i==0){
            head = temp;
            traverse = temp;
        }else{
            traverse->next = temp;
            traverse = traverse->next;
        }
    }
    return head;
}
void display_list(struct list *head){
    if(!head)
        printf("List is empty\n");
    for (struct list *i= head; i!=NULL ; i=i->next) {
        printf("%d ", i->data);
    }
    printf("\n");
}
void add_node_start(struct list **head, int val){
    struct list *node = new_node(val);
    node->next = *head;
    *head = node;
}
void add_node_end(struct list **head, int val){
    struct list *node = new_node(val), *last=*head;
    for (;last->next!=NULL; last=last->next);
    last->next = node;
}
int pop_start(struct list **head){
    if(!*head){
        printf("No element found - Exit\n");
        exit(1);
    }
    int val = (*head)->data;
    struct list *temp = *head;
    *head = (*head)->next;
    free(temp);
    return val;
}
int pop_end(struct list **head){
    if(!*head){
        printf("No element found - Exit\n");
        exit(1);
    }
    if(!(*head)->next){
        int val = (*head)->data;
        free(*head);
        *head = NULL;
        return val;
    }
    struct list *last_sec = *head;
    for (;last_sec->next->next!=NULL;last_sec=last_sec->next);
    struct list *last = last_sec->next;
    last_sec->next = NULL;
    int val = last->data;
    free(last);
    return val;
}
void add_after_pos(struct list **head, int pos, int val){
    if(pos<=0){
        add_node_start(head, val);
    }else{
        struct list *traverse = *head;
        for(int i=1;i<pos;i++){
            traverse = traverse->next;
            if(!traverse->next)
                break;
        }
        struct list *node = new_node(val);
        node->next = traverse->next;
        traverse->next = node;
    }
}
void reverse(struct list **head){
    struct list *traverse = *head, *reversed = NULL;
    while(traverse){
        struct list *temp = traverse->next;
        traverse->next = reversed;
        reversed = traverse;
        traverse = temp;
    }
    *head = reversed;
}
void sort(struct list **head){
    struct list *end=NULL;
    while(end!=*head){
        struct list *i=*head;
        for(;i->next!=end;i=i->next);  //To take i at 'end'
        struct list *j = *head;
        while(j!=i){
            if(j->data>j->next->data){
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
            j=j->next;
        }
        end = i;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    struct list *LL = create_list(arr, 5);
    reverse(&LL);
    sort(&LL);
    display_list(LL);
}