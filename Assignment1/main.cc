#include "Storage.h"

int mainMenu();

//================================
//Course: COMP2406
//purpose of program: The point of the program is to let the user to store students' id and its courses and print all the information
//usage: The user can put a 1 to enter another student or a 0 to end the program. When you are entering a student, you can add the courses by adding its information line by line. You can end entering courses by puting a 0 when you are entering the course code 
//author: Michael Balcerzak
//revisions: c++ and made on Feb, 5, 2019
//================================ 

int main() {
  // the main function of the program
  // varibles
  Storage storage;
  int     stuId, courseCode, grade, date, c;
  string  instructor;
  char    str[100];
  int     menuSelection;

  while (1) {

    // get the user answer
    menuSelection = mainMenu();
    
    // stop the program if the user quit 
    if (menuSelection == 0) 
      break;

    else if (menuSelection == 1) {
    // add another student
      
      cout << "student id:   ";
      cin  >> stuId;
      Student * student = new Student(stuId);

      while (1) {
	// adding courses to the student
        cout << "course code <0 to end>:  ";
        cin  >> courseCode;
        if (courseCode == 0)
          break;
	// add all the information to the course
        cout << "grade:                   ";
        cin  >> grade;
	cout << "date:                    ";
	cin  >> date;
	cout << "instructor            	 " << endl; 
	//int i = 0;
	//do {
	//	c = getchar();
	//	str[i] = c;
	//	i++;
	//} while (c!='\n');

	//getline(cin, instructor); 
	//
	cin >> instructor;
	cout << "you entered: " << instructor << endl;
	// make new course object
	Course * course = new Course(courseCode, grade, date, instructor);

	// add course to the student
	student->addCourse(course);
      }
      // add student to the storage
      storage.addStu(student);
    }
  }

  // print the result
  storage.print();
  return 0;
}

int mainMenu() {
  // the main menu asks if the user wants to add another student or not
  // varibles
  int numOptions = 1;
  int selection  = -1;

  // choices
  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  // entering
  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
  
  // return the user answer
  return selection;
}
