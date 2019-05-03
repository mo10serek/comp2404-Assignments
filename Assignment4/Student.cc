#include "Student.h"

// this class is used to store the student's id and its courses
Student::Student(int i/*input*/) {
  // constructor
  cout << "ctor: " << endl;
  id = i;
  numCourses= 0;
}

Student::~Student() {
  //destructor
  cout << "student dtor: " << endl; 
}

// getter of the data member id
int Student::getId() { return id; }

void Student::operator+=(Course* c) {
  // add a course to the student you are adding it to
  coursesList += c;
  numCourses++;
}

void Student::print() {
  // print all the courses that the student has
  cout<< endl << "Id: " << id << endl;
  coursesList.print();
  cout << endl << "GPA: " << computeGPA() << endl;
  
}


float Student::computeGPA() {
  // this fuction get the GPA from the student's list
  return coursesList.computeGPA();

}

int Student::computeNumFW() {
  // this function get the number of failed courses from the student's list
  return coursesList.computeNumFW();
}
