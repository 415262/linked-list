#include "Student.h"
Student::Student() {
  firstName;
  lastName;
  id = 0;
  gpa = 0;
}

Student::~Student() {
  //delete firstName;
  //delete lastName;
}

void Student::setFirstName(string newFirstName) {
  firstName = newFirstName;
}

string Student::getFirstName() {
  return firstName;
}

void Student::setLastName(string newLastName) {
  lastName = newLastName;
}

string Student::getLastName() {
  return lastName;
}

void Student::setID(int newID) {
  id = newID;
}

int Student::getID() {
  return id;
}

void Student::setGPA(float newGPA) {
  gpa = newGPA;
}

float Student::getGPA() {
  return gpa;
}
