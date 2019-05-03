#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Course {
  // members functions
  public:
    Course(int =0/*input*/,int =0/*input*/, int =0/*input*/, string =""/*input*/);
    ~Course();
    int getGrade();
    void print();
    bool lessThan(Course* /*input*/); 

  // data members
  private:
    int code;		// course code, for example 2404 for COMP2404
    int grade;		// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int date;		// the term when the course was taken
    string instructor; 	// the instructior of the course
    // the private member function used only for the class
    void getGradeStr(string&);
};

#endif
