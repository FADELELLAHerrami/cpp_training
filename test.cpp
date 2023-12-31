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

// add in the end
struct node* addEnd(int d, node* head){
    struct node* newEnd = (struct node*)malloc(sizeof(struct node));
    newEnd->data = d;
    newEnd->next = nullptr;
    if(head == nullptr){
        head = newEnd;
    }else{
        struct node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newEnd;
    }
    return head;
};

// size of the list
int listSize(struct node* n){
    int count = 0;
    while (n != NULL) {
        ++count;
        n = n->next;
    }
    return count;
}
// check if the list is empty
bool isEmpty(struct node* n){
    if(n==null){
        return true;
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

    cout << "Original List: ";
    printList(head);

    // Add an element (54) at the beginning
    head = addFirst(54, head);

    cout << "Updated List: ";
    printList(head);

    // Add an element (54) at the end
    head = addEnd(54, head);

    cout << "Updated List: ";
    printList(head);
    // size of the list
    cout<< "Size : "<<listSize(head)<<endl;

    return 0;
}











