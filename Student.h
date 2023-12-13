#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:
  Student();
  ~Student();

  void setFirstName(string newFirstName);
  string getFirstName();

  void setLastName(string newLastName);
  string getLastName();

  void setID(int newID);
  int getID();

  void setGPA(float newGPA);
  float getGPA();
 private:
  string firstName;
  string lastName;
  int id;
  float gpa;
};
#endif
