#include "Storage.h"

// this class us use to store all the students in the array

Storage::Storage() {
  // default constructor
  numberOfStudents = 0;
}

Storage::~Storage() {
  // destructor
  for (int counter = numberOfStudents-1; counter >= 0; counter--) {
    cout << "Storage dtor: " << counter+1 << endl;
    delete students[counter];
  }
}

void Storage::addStu(Student* student/*input*/) {
  // the function to add a student to the array
  students[numberOfStudents] = student;
  numberOfStudents++;
}

void Storage::print() {
  // print out the array
  for (int counter = 0; counter < numberOfStudents; counter++) {
    students[counter]->print();
  }
}
