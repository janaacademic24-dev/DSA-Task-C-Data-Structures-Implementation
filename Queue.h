#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
using namespace std;

//Array Queue
class QueueArray {
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int count;
public:
    QueueArray(int size);
    ~QueueArray();


    bool isEmpty();
    bool isFull();
    void enqueue(int x);
    int dequeue();
    int peek();
};
//Linked List Queue


class QueueLL {
private:
    Node* front;
    Node* rear;
public:
    QueueLL();
    ~QueueLL();

    bool isEmpty();
    void enqueue( int x);
    int dequeue();
    int peek();
};

#endif
