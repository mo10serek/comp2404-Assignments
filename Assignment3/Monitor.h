#ifndef MONITOR_H
#define MONITOR_H

#include <vector>
#include "Student.h"

// this class is the observer of the program and the parent of the concrete observer

class Monitor {
  // member functions
  public:
    Monitor();
    ~Monitor();
    void printLogs();
    virtual void update(Student* /*input*/){}
  
  // data member
  protected:
    vector<string> collectionOfLogs;
};

#endif
