#include "Control.h"

// this function launches the program
void Control::launch() {
  
  // varibles 
  int choice = 0;
  int stuId, courseCode, grade, date;
  string instructor;

  // start getting the students
  while (1) {
    // get the choice from the user in the main menu member function in the view object
    choice = view.mainMenu();

    // exit the loop when the user enter 0
    if (choice == 0) {
      break;
    } else {
      // get the id from the user in the readingId member function in the view object 
      view.readingId(stuId);
      // make the new student pointer
      Student* newStudent = new Student(stuId);
      // start getting the courses for the student
      while (1) {
	// get the courseCode, grade, date, and instructor in the readingCourse member fuction in the view object
        view.readingCourse(courseCode, grade, date, instructor);

	// exit the loop when the user enter 0 in the course code
	if (courseCode == 0) {
	  break;
	}

	// make the new course pointer
        Course* newCourse = new Course(courseCode, grade, date, instructor);

	// add course to the student  
        newStudent->addCourse(newCourse);
      }
      // add student to the storage
      storage.addStu(newStudent);
    }
  }    
  // print all student and its courses
  view.printStorage(storage);
}
