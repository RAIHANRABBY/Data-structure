
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *link;
};

// Typecast the struct node to Node
typedef struct node Node;

// Function to add a node at the start of the linked list
void add_node_at_start(Node** head_ref, int new_data) {
    // Allocate memory for a new node
    Node* new_node = (Node*)malloc(sizeof(Node));

    // Assign data to the new node and make its next point to the current head
    new_node->data = new_data;
    new_node->link = *head_ref;  // Correctly use 'link' instead of 'next'

    // Move the head to point to the new node
    *head_ref = new_node;
}

// Function to print the linked list
void print_list(Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->link;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;  // Initialize head as NULL

    // Add nodes to the list
    add_node_at_start(&head, 40);  // Pass the address of head
    add_node_at_start(&head, 30);  // List: 30 -> 40 -> NULL
    add_node_at_start(&head, 20);  // List: 20 -> 30 -> 40 -> NULL
    add_node_at_start(&head, 10);  // List: 10 -> 20 -> 30 -> 40 -> NULL

    // Print the linked list
    printf("Linked List: ");
    print_list(head);

    return 0;
}
