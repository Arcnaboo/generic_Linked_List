// main.c
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_int(void* data) {
    printf("%d\n", *(int*)data);
}

int main() {
    LinkedList list;
    init_list(&list);

    for (int i = 0; i < 5; i++) {
        int* num = malloc(sizeof(int));
        *num = i * 10;
        list.add(&list, num);
    }

    printf("Linked List Contents:\n");
    list.print(&list, print_int);

    list.clear(&list);
    return 0;
}
