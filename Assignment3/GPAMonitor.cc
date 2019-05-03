#include "GPAMonitor.h"

// this class is the observer that observer the GPA that is bellow the minimum threshold

GPAMonitor::GPAMonitor(float minimumGPA) {
  // constructor
  minimumThreshold = minimumGPA;
}

void GPAMonitor::update(Student* student /*input*/) {
  // this function stores the student GPA if it bellow the minimum threshold
  if (student->computeGPA() <= minimumThreshold) {
    string GPA = to_string(student->getId()) + " GPA: " + to_string(student->computeGPA());
    collectionOfLogs.push_back(GPA);
  } 
}
