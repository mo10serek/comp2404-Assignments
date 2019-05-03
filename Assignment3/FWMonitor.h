#include "Monitor.h"

class FWMonitor: public Monitor {
  
  // members function
  public:
    FWMonitor(int);
    virtual void update(Student*);
   
  // data member
  private:  
    int highestThreshold;

};
