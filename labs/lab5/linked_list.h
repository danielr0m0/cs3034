#ifndef LINKED_LIST
#define LINKED_LIST
typedef struct object {
    int id;
}object;
typedef struct node
{ 
    void* data;
    struct node* next;
} node;


void (*print)(void* data);
/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/
node* create(void* data,node* next);
 
/*
    add a new node at the beginning of the list
*/
node* prepend(node* head,void* data);
/*
    add a new node at the end of the list
*/
node* append(node* head, void* data);
/*
    insert a new node after the prev node
*/
node* insert_after(node *head, void* data, node* prev);
/*
    insert a new node before the nxt node
*/
node* insert_before(node *head, void* data, node* nxt);
/*
    traverse the linked list
*/
void traverse(node* head, void (*print)(void *));
/*
    remove node from the front of list
*/
node* remove_front(node* head);
/*
    remove node from the back of the list
*/
node* remove_back(node* head);
/*
    remove a node from the list
*/
node* remove_any(node* head,node* nd);
/*
    display a node
*/
void display(node *n, void (*print)(void *));


//pass the id to search
node* search(node* head,int data);

int getid(void* data);

/*
    remove all element of the list
*/
void clears(node *head);
/*
    return the number of elements in the list
*/
int count(node *head);
/*
    sort the linked list using insertion sort
*/
node* insertion_sort(node* head);
 
/*
    reverse the linked list
*/
node* reverse(node* head);

#endif
