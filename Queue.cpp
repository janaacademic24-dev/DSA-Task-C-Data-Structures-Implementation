#include "Queue.h"
#include <iostream>
using namespace std;
//Array Queue
QueueArray::QueueArray(int size) {
 capacity=size;
    arr=new int[capacity];
    front = 0;
    rear = -1;
    count=0;
}
QueueArray::~QueueArray() {
    delete[] arr;
}

bool QueueArray::isEmpty() {
    return count==0;
}

bool QueueArray::isFull() {
    return count==capacity;
}

void QueueArray::enqueue(int x) {
    if (isFull()) {
        cout << "Full\n";
        return;
    }

        rear = (rear + 1) % capacity;
         arr[rear] = x;
         count++;
}

int QueueArray::dequeue() {
    if (isEmpty()) {
        cout << "Empty\n";
        return -1;
    }

    int x = arr[front];
    front = (front + 1) % capacity;
    count--;
    return x;

}

int QueueArray::peek() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    cout << "Front value is: " << arr[front] << endl;
    return arr[front];
}



//Linked List Queue
QueueLL::QueueLL() : front(nullptr), rear(nullptr) {}

QueueLL::~QueueLL() {
    while (!isEmpty())
        dequeue();
}

void QueueLL::enqueue(int value) {
    Node* newNode = new Node{value, nullptr};
    if (rear == nullptr) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int QueueLL::dequeue() {
    if (isEmpty()) {
        cout << "Queue Empty\n";
        return -1;
    }
    Node* temp = front;
    int val = temp->data;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete temp;
    return val;
}

bool QueueLL::isEmpty() {
    return front == nullptr;
}
int QueueLL::peek() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    cout << "Front value is: " << front->data << endl;
    return front->data;
}
