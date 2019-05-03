#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "defs.h"
#include "Course.h"

// This class is used to store the student's id and its courses
class Student {
  // member functions
  public:
    Student(int=0);
    ~Student();
    void addCourse(Course*);
    void print();
  
  // data members
  private:
    int    	id;	  			// students' id
    int 	numCourses;			// the number of courses that the student has
    Course*	courses[MAX_NUM_COURSES];	// all the courses that the student has
};

#endif
