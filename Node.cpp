#include "Node.h"
#include "Student.h"
//#include "Student.cpp"
Node::Node() {
  Student();
  next = NULL;
}

Node::~Node() {
  delete student;
  next = NULL;
}

void Node::setStudent(Student* newvalue) {
  student = newvalue;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}
