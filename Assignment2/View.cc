#include "View.h"

// this class takes control of what the user input and output
int View::mainMenu() {
  // main menu
  int numOptions = 1;
  int selection = -1;

  // print the choices
  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  // enter the selection
  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin >> selection;
  }
  // return
  return selection;
}

void View::readingId(int& stuId/*input*/) {
  // get the student id from the user
  cout << "student id: ";
  cin >> stuId;
}

void View::readingCourse(int& courseCode /*input*/, int& grade /*input*/, int& date /*input*/, string& instructor/*input*/) {
  // adding courses to the student
  cout << "course code <0 to end>:  ";
  cin  >> courseCode;
  if (courseCode == 0) {
    return;
  }
  // add all the information to the course
  cout << "grade:                   ";
  cin  >> grade;
  cout << "date:                    ";
  cin  >> date;
  cout << "instructor:              "; 
  cin >> instructor;
   
}

void View::printStorage(Storage& storage/*output*/) {
  // print all the students
  storage.print();
}
