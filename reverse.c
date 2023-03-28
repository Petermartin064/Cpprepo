#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} Node;

typedef struct linked_list {
    Node* head;
} LinkedList;

LinkedList* create_list() {
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

void add_node(LinkedList* list, int value) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
    } else {
        Node* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
}

void print_list(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void reverse_list(LinkedList* list) {
    Node* current = list->head;
    Node* prev = NULL;
    while (current != NULL) {
        Node* next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }
    list->head = prev;
}

int main() {
    LinkedList* list = create_list();
    add_node(list, 1);
    add_node(list, 2);
    add_node(list, 3);
    add_node(list, 4);
    printf("List before reversing: ");
    print_list(list);
    reverse_list(list);
    printf("List after reversing: ");
    print_list(list);
    return 0;
}

