
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head; // Encapsulated private member

public:
    // Constructor & Destructor
    LinkedList();
    ~LinkedList();

    // Required Operations
    void insertAtHead(int value);
    void insertAtEnd(int value);
    void deleteValue(int value);
    void display();
};

#endif
