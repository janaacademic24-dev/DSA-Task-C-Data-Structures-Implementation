#include <iostream>
#include "LinkedList.h"
#include "stack.h"
#include "Queue.h"

using namespace std;

int main() {
   LinkedList list;
   list.insertAtHead(10);
   list.insertAtEnd(20);
   list.insertAtEnd(30);
   list.display();
   list.deleteValue(20);
   list.display();

   StackArray sArr(3);
   cout << "Stack empty? " << (sArr.isEmpty() ? "Yes" : "No") << endl;
   sArr.push(1);
   sArr.push(2);
   sArr.push(3);
   sArr.push(4);
   cout<< "The value of popping is"<<sArr.pop()<<endl;
   cout << "Stack empty? " << (sArr.isEmpty() ? "Yes" : "No") << endl;

   StackLinkedList sll;
   cout << "Stack empty? " << (sll.isEmpty() ? "Yes" : "No") << endl;
   sll.push(5);
   sll.push(6);
   cout<<sll.pop()<<endl;
   sll.peek();

   QueueArray qarr(3);
   cout << "Queue empty? " << (qarr.isEmpty() ? "Yes" : "No") << endl;
   cout << "Queue full? "  << (qarr.isFull()  ? "Yes" : "No") << endl;
   qarr.enqueue(100);
   qarr.enqueue(200);
   cout<<qarr.dequeue()<<endl;
   cout << "Queue full? "  << (qarr.isFull()  ? "Yes" : "No") << endl;
   cout << "Queue empty? " << (qarr.isEmpty() ? "Yes" : "No") << endl;

   QueueLL qll;
   cout << "Queue empty? " << (qll.isEmpty() ? "Yes" : "No") << endl;
   qll.enqueue(7);
   qll.enqueue(8);
   cout<< qll.dequeue()<<endl;
   cout << "Queue empty? " << (qll.isEmpty() ? "Yes" : "No") << endl;
   return 0;

}
