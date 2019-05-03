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
  for (int counter = numCourses-1; counter >= 0; counter--) {
	cout << "student dtor: " << counter+1 << endl; 
	delete courses[counter];
  }
}  

void Student::addCourse(Course* c/*input*/) {
  // add a course to the student you are adding it to
  courses[numCourses] = c;
  numCourses++;
}

void Student::print() {
  // print all the courses that the student has
  cout<< endl << "Id: " << id << endl;

  for (int i=0; i<numCourses; ++i) {
    courses[i]->print();
  }

}

