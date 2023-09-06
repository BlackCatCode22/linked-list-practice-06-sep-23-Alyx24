#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n->value << endl;
        n = n->next;
    }
}

int main() {
    cout << "Welcome. This is an intro to linked lists!" << endl;

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    printList(head);
    // set up my linked list.
    Node* pHead;
    //Create a helper pointer named current
    Node* pCurrent;
    // Create a helper pointer named next
    Node* pNext;
    // Create a new node.
    pHead = new Node ();

    pHead -> value = 1;

    // Second Node
    pCurrent = new Node ();
    pCurrent -> value = 2;

    pHead ->next = pCurrent;
    // end the list
    pCurrent->next= NULL;

    // print list
    printList (pHead);


    for (int i=0; i < 10; i++) {




    }
    return 0;
}
