#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int data;
    struct node* next;
};

// Function to display linked list
void printList(struct node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Add an element at the beginning
struct node* addFirst(int d, struct node* head) {
    struct node* newFirst = (struct node*)malloc(sizeof(struct node));
    newFirst->data = d;
    newFirst->next = head;
    return newFirst;
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

    cout << "Original List: ";
    printList(head);

    // Add an element (54) at the beginning
    head = addFirst(54, head);

    cout << "Updated List: ";
    printList(head);

    return 0;
}
