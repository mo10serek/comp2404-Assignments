#ifndef LIST_H
#define LIST_H

#include "CourseList.h"
#include <cstdlib>

// This class is used to store the student's id and its courses
class Student {
  // member functions
  public:
    Student(int=0);
    ~Student();
    int getId();
    void operator+=(Course*);
    void print();
    float computeGPA();
    int computeNumFW();
  
  // data members
  private:
    int   id;	  	// students' id
    int   numCourses;	// the number of courses that the student has
    CourseList  coursesList;	// all the courses that the student has
};

#endif
