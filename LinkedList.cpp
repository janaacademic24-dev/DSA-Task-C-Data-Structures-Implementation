#include "LinkedList.h"
#include <iostream>

// Constructor initializes an empty list
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor traverses the list and frees all allocated memory
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next; // Store next node before deleting current
        delete current;                 // Free memory
        current = nextNode;             // Move to the next node
    }
    head = nullptr;
}

void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node(value, head);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node(value, head);
    newNode->data = value;
    newNode->next = nullptr;

    // If the list is currently empty, the new node becomes the head
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Link the new node at the end
    current->next = newNode;
}

void LinkedList::deleteValue(int value) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot delete." << std::endl;
        return;
    }

    // Case 1: The value to delete is at the head
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp; // Free memory
        return;
    }

    // Case 2: The value is somewhere else in the list
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    // If the value was not found in the list as it will have finished the while loop
    if (current == nullptr) {
        std::cout << "Value " << value << " not found." << std::endl;
        return;
    }

    // Unlink the node and free memory
    previous->next = current->next;
    delete current;
}

void LinkedList::display() {
    if (head == nullptr) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}
