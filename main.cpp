//Possible fix: try instead of value newstudent, do Student() inside the new Head Node

#include <iostream>
#include "Node.h"

using namespace std;

void add(Node* head, Node* newNode);
void print(Node* next);
void del(Node* next, int delput);
Node* findEnd(Node* n);
string input;
int intput;

Node* head = NULL;
int main() {
 
  
  while (input != "QUIT") {
    cout << "ADD student, PRINT list, DELETE student, AVERAGE grades, or QUIT program" << endl;
    cin >> input;
    if (input == "ADD") {
      add(head, &new Node(new Student));
    }
    else if (input == "PRINT") {
      print(head);
    }
    else if (input == "DELETE") {
      int delput = 0;
      cout << "Type the ID of the student you wish to delete: " << endl;
      cin >> delput;
      del(head, delput);
    }
    else {
      continue;
    }
  }
  return 0;
}

void add(Node* head, Node* newNode) {//Two cases: Either creates a new node to be head, or adds a node at END of list
  //Node* current = head;
  if (head == NULL) {

    head = new Node(newstudent); //We create a new blank head
    
    cout << "is NULL test" << endl; //For debugging

    cout << "First Name:" << endl;

    cin >> input; head -> getStudent() -> setFirstName(input);

    cout << "Last Name:" << endl;
    cin >> input; head -> getStudent() -> setLastName(input);

    cout << "ID:" << endl;
    cin >> intput; head -> getStudent() -> setID(intput);

    cout << "GPA:" << endl;
    cin >> intput; head -> getStudent() -> setGPA(intput);
  }
  else {
    end = findEnd(&head);
    end->setNext(newNode);
    newNode->setNext(NULL);
    //newNode->setNext()->setStudent(newstudent);

    cout << "not NULL test" << endl;

    cout << "First Name:" << endl;
    cin >> input; current -> getStudent() -> setLastName(input);

    cout << "Last Name:" << endl;
    cin >> input; current -> getStudent() -> setLastName(input);

    cout << "ID:" << endl;
    cin >> intput; current -> getStudent() -> setID(intput);

    cout << "GPA:" << endl;
    cin >> intput; current -> getStudent() -> setGPA(intput);
  }

  cout << "Student Created." << endl;
  
}

Node* findEnd(Node* n) {
  if (n->getNext != NULL) {
    findEnd(n->getNext);
  }
  return n;
}

void print(Node* current) {
  //cout << "Print:" << endl;
  if (current == head) {
    cout << "Print:";
  }
  if (current->getNext() != NULL) {
    cout << current->getStudent()->getID() << " ";
    print(current->getNext());
  }
  else {
    cout << endl << "End of List" << endl;
  }
}

void avg(Node* current, int count) {//count
  
}

void del(Node* current, int id) {//all students with inputted ID will be deleted
  if (current != NULL) {
    if (current->getStudent()->getID == id) {
      //delete node
    }
    else {
      del(current->getNext, id);
    }
  }
}
