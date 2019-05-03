#include "FWMonitor.h"

// this class is the observer that checks if the number of failed courses is above the highest threshold

FWMonitor::FWMonitor(int highestFW) {
  // constructor
  highestThreshold = highestFW;	  
}

void FWMonitor::update(Student* student /*input*/) {
  /// this function add the number of failed courses if it above the highest threshold
  cout << "highest threshold: " << highestThreshold << endl;
  if (student->computeNumFW() >  highestThreshold) {
    string FW = to_string(student->getId()) +" times failed: " + to_string(student->computeNumFW());
    collectionOfLogs.push_back(FW);
  }
}
