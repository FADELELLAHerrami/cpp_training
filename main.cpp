#include <iostream>

using namespace std;

struct node {
    int data;             // store the data
    struct node* next;    // store the address of the next node
};

// Function to display linked list
void printList(struct node* n) {
    while (n != NULL) {
        printf("%d ", n->data);  // Add a space after %d to separate the numbers
        n = n->next;
    }
}

int main() {
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Call the printList function to display the linked list
    printList(head);

    return 0;
}
