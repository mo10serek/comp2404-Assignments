#include "ConcreteControl.h"

//================================
//Course: COMP2406
//purpose of program: The point of the program is to let the user to store students' id and its courses and print all the information
//usage: The user can put a 1 to enter another student or a 0 to end the program. When you are entering a student, you can add the courses by adding its information line by line. You can end entering courses by puting a 0 when you are entering the course code. Also it put the courses in order in the student easly. 
//author: Michael Balcerzak
//revisions: c++ and made on March, 9, 2019
//================================ 

int main() {
  // the main function of the program
  
  // launch the program in the launch member function in the control object
  ConcreteControl concreteControl;
  concreteControl.launch();

  return 0;
}


