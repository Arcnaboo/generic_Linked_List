#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
    int size;

    // Class-like method bindings
    void (*add)(struct LinkedList*, void* data);
    void (*remove_first)(struct LinkedList*);
    void (*clear)(struct LinkedList*);
    void (*print)(struct LinkedList*, void (*print_func)(void*));
} LinkedList;

// Function implementations
void init_list(LinkedList* list);
void add_node(LinkedList* list, void* data);
void remove_first_node(LinkedList* list);
void clear_list(LinkedList* list);
void print_list(LinkedList* list, void (*print_func)(void*));

#endif
