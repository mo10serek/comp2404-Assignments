#include "Control.h"

Control::Control() {
  // contructor
  // make the monitor objects in the monitors list
  monitorsList.push_back(new GPAMonitor(3.0));
  monitorsList.push_back(new FWMonitor(2));

  // make the string of student
  vector<string> studentsFromServer;

  // take the students from the server and put them in the list
  stuServer.retrieve(studentsFromServer);

  // list of varibles used in this operation
  stringstream ss;
  int id = 0;
  int courseCode = 0;
  int term = 0;
  int grade = 0;
  string instructor = "";

  int studentServerSize = studentsFromServer.size();

  // loop though the lists
  for (int counter = 0; counter < studentServerSize; ++counter) {
    // clear the string stream
    ss.clear();
    // take one string from the list
    ss.str(studentsFromServer[counter]);
    // take the id 
    ss >> id;
    Student* newStudent = new Student(id);
    while (true) {
      // take the rest of the students' courses information
      ss >> courseCode >> term >> grade >> instructor;
      if (courseCode == 0) {
      	break;
      }
      Course* newCourse = new Course(courseCode, grade, term, instructor);
      
      *(newStudent)+=newCourse;
    }
    // test put it in the monitor
    notify(newStudent);
    // add the new student to the storage
    storage+=newStudent;
  }
}

Control::~Control() {
  // destructor and print the logs from the monitors
  cout << endl;

  int monitorsListSize = monitorsList.size();

  for (int counter = 0; counter<monitorsListSize; counter++) {
    monitorsList[counter]->printLogs();
    delete monitorsList[counter];
  }
}

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
        *newStudent+=newCourse;
      }
      notify(newStudent);
      // add student to the storage
      storage+=newStudent;
    }
  }    
  // print all student and its courses
  view.printStorage(storage);
}

void Control::notify(Student* newStu  /*input*/) {
  // this function update the monitors by passing in the new student
  int monitorsSize = monitorsList.size();
  for (int counter = 0; counter<monitorsSize; counter++) {
    monitorsList[counter]->update(newStu);
  }
}
