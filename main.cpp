/*#include <iostream>

using namespace std;

struct Node
{
    int data;             // store the data
    Node* next;    // store the address of the next node
    Node* prev; // store the address of the previous node
};

// Function to display linked list forwards
void printForward(Node* n)
{
    while (n != NULL)
    {
        cout<<n->data<<endl;  // Add a space after %d to separate the numbers
        n = n->next;
    }
}

// Function to display linked list backword
void printBackward(Node* n)
{
    while (n != NULL)
    {
        cout<<n->data<<endl;  // Add a space after %d to separate the numbers
        n = n->prev;
    }
}

int main()
{
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 1;
    head->next = second;
    head->prev = nullptr;

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = NULL;
    third->prev = second;

    // Call the printList function to display the linked list
    printForward(head);
    printBackward(third);

    return 0;
}
*/
