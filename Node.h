//
// Created by Janah on 4/25/2026.
//

#ifndef DSA_TASK_NODE_H
#define DSA_TASK_NODE_H

 //DSA_TASK_NODE_H
struct Node {
    int data;
    Node* next;
    //  Added constructor for safer node creation
    Node(int val, Node* nxt = nullptr) : data(val), next(nxt) {}


};
#endif
