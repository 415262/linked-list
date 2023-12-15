#include <iostream>
#include "Node.h"

using namespace std;

void add(Student* newvalue, Node* head);
void print(Node* next, Node* head);



int main() {
  Node* head = NULL;
  //int id = 0;
  add(new Student(), head);
  print(new Node(), head);
  return 0;
}

void add(Student* newvalue, Node* head) {
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setStudent(newvalue);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setStudent(newvalue);
  }
}

void print(Node* next, Node* head) {
  if (next == head) {
    cout << "Print:";
  }
  if (next != NULL) {
    cout << next->getStudent()->getID() << " ";
    print(next->getNext(), head);
  }
}
