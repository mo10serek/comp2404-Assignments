#define MAX_NUM_STU 64

#include "Student.h"
#include <cstdlib>

// this class is to store all the students in an array
class Storage {
  // member functions
  public: 
    Storage(); 
    ~Storage(); 
    //void addStu(Student* /*input*/);
    void operator+=(Student*);
    void print();

  // data members
  private:
    Student* 	students[MAX_NUM_STU];	// all the students that the storage has
    int 	numberOfStudents;	// the number of students
};
