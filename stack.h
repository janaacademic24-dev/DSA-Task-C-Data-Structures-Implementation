#ifndef DSA_TASK_STACK_H
#define DSA_TASK_STACK_H
#include "Node.h"
//Stack using Array
class StackArray {
private:
    int* arr;
    int top;
    int capacity;
public:
    StackArray(int size);
    ~StackArray();
    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};
//Stack using Linked List
class StackLinkedList {
private:
    Node* top;
public:
    StackLinkedList();
    ~StackLinkedList();
    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
};
#endif //DSA_TASK_STACK_H
