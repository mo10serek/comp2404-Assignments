#include "CourseList.h"

float CourseList::computeGPA() {
  // this function compute the GPA of the student
	
  // current node
  Node* currNode;

  // set up the local data members
  float totalGrade = 0;
  float GPA = 0;
  int numberOfCourses = 0;

  // start at the head
  currNode = head;

  // go though the list and add each grade to the total
  while (currNode != NULL) {
    if ((currNode->data->getGrade() >= 0) && (currNode->data->getGrade() <= 12)) {
      totalGrade += currNode->data->getGrade();
      numberOfCourses++;
    }
    currNode = currNode->next;
  }
  
  // find the average of the grades and return it
  if (numberOfCourses == 0) {
    return 0;
  }
  GPA = totalGrade/numberOfCourses;
  return GPA;

}

int CourseList::computeNumFW() {
  // this function finds the number of failed courses
  
  // current node
  Node* currNode;

  // set up the local data members
  int failedCourses = 0;
  
  // start at the head
  currNode = head;
  // go though the list and count the failed courses
  while (currNode != NULL) {
    if (currNode->data->getGrade() <= 0) {
      failedCourses++;
    }
    currNode = currNode->next;
  }
  
  // return the failed courses
  return failedCourses;
}
