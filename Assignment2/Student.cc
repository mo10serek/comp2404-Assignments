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

void Student::addCourse(Course* c/*input*/) {
  // add a course to the student you are adding it to
  coursesList.add(c);
  numCourses++;
}

void Student::print() {
  // print all the courses that the student has
  cout<< endl << "Id: " << id << endl;
  coursesList.print();
}
