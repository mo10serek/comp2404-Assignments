#include "Control.h"

Control::Control() {
  // contructor
  monitorsList.push_back(new GPAMonitor(3.0));
  monitorsList.push_back(new FWMonitor(2));
}

Control::~Control() {
  // destructor and print the logs from the monitors
  cout << endl;
  for (int counter =0; counter<monitorsList.size(); counter++) {
    monitorsList[counter]->printLogs();
    delete monitorsList[counter];
  }
}
