#include <iostream>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
#include "defs.h"

#include "Student.h"

// this class is to store all the students in an array
class Storage {
  // member functions
  public:
    Storage();
    ~Storage(); 
    void addStu(Student*); 
    void print();    

  // data members
  private:
    Student* 	students[MAX_NUM_STU];	// all the students that the storage has
    int 	numberOfStudents;	// the number of students
};
