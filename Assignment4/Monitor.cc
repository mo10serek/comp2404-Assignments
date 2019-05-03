
#include "Monitor.h"

// this class is the observer of this program and is the parent of the concrete observers

Monitor::Monitor() {}

Monitor::~Monitor() {}

void Monitor::printLogs() {
  // this function prints out all the collection of logs
  int collectionOfLogsSize = collectionOfLogs.size();
  for (int counter = 0; counter < collectionOfLogsSize; counter++) {
    cout << collectionOfLogs[counter] << endl << endl;
  }
}
