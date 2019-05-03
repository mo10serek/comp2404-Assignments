#include "List.h"

// This class is used to store the student's id and its courses
class Student {
  // member functions
  public:
    Student(int=0);
    ~Student();
    void addCourse(Course* /*input*/);
    void print();
  
  // data members
  private:
    int   id;	  	// students' id
    int   numCourses;	// the number of courses that the student has
    List  coursesList;	// all the courses that the student has
};
