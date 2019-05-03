#include "Storage.h"

// this class us use to store all the students in the list

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
  // the function to add a student to the list
  if (numberOfStudents != 63) {
    students[numberOfStudents] = student;
    numberOfStudents++;
  } else {
    // let the user know that there is to much student in the storage
    cout << "To many student to add new ones" << endl;
  }
}

void Storage::print() {
  // this fuction print out the list
  for (int counter = 0; counter < numberOfStudents; counter++) {
    students[counter]->print();
  }
}
