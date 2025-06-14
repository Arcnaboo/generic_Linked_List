// linkedlist.c
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void add_node(LinkedList* list, void* data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
}

void remove_first_node(LinkedList* list) {
    if (!list->head) return;
    Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
    list->size--;
}

void clear_list(LinkedList* list) {
    while (list->head) {
        remove_first_node(list);
    }
}

void print_list(LinkedList* list, void (*print_func)(void*)) {
    Node* current = list->head;
    while (current) {
        print_func(current->data);
        current = current->next;
    }
}

void init_list(LinkedList* list) {
    list->head = NULL;
    list->size = 0;
    list->add = add_node;
    list->remove_first = remove_first_node;
    list->clear = clear_list;
    list->print = print_list;
}
