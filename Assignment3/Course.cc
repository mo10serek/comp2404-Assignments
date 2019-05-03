#include "Course.h"

// this class use to store all the information for the course
Course::Course(int c/*input*/, int g/*input*/, int d/*input*/, string i/*input*/) {
  // consturctor
  code  = c;
  grade = g;
  date = d;
  instructor = i;
}

Course::~Course() {}

// getter of the data member grade
int Course::getGrade() { return grade; }

void Course::print() {
  // this function prints all the data that the course have
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2) << grade   << "  ";
  cout << right << setw(2) << date << "  ";
  cout << right << setw(2) << instructor << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << endl;	
} 

bool Course::lessThan(Course* c/*input*/) {
  // this function checks if the passing course's code is less than code in this class
  cout << this->code << ">=" << c->code << endl;
  return this->code >= c->code;
}

void Course::getGradeStr(string& gradeStr/*output*/) {
  // this function output the the grade in letters by the input by the gradeStr data member 
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+", 
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}
