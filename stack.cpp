#include "stack.h"
#include <iostream>
using namespace std;
//Implementation of StackArray
StackArray::StackArray(int size) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
}
StackArray::~StackArray() {
    delete[] arr;
}
bool StackArray::isEmpty() {
    return top == -1;
}
bool StackArray::isFull() {
    return top == capacity - 1;
}
void StackArray::push(int value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << value << endl;
        return;
    }
    arr[++top] = value;
    cout << value << " pushed to stack" << endl;
}
int StackArray::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Stack is empty" << endl;
        return -1;
    }
    return arr[top--];
}

int StackArray::peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return arr[top];
}
//Implementation of StackLinkedList
StackLinkedList::StackLinkedList() {
    top = nullptr;
}
StackLinkedList::~StackLinkedList() {
    while (!isEmpty()) {
        pop();
    }
}
bool StackLinkedList::isEmpty() {
    return top == nullptr;
}
void StackLinkedList::push(int value) {
    Node* newNode = new Node(value,top);
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed to stack" << endl;
}
int StackLinkedList::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Stack is empty" << endl;
        return -1;
    }
    Node* temp = top;
    int val = temp->data;
    top = top->next;
    delete temp;
    return val;
}
int StackLinkedList::peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    cout << "Value peeked" << endl;
    return top->data;
}
