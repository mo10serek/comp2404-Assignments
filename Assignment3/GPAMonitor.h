#include "Monitor.h"

class GPAMonitor: public Monitor {
  // members functions
  public:
    GPAMonitor(float);
    virtual void update(Student*);

  // data member
  private:
    float minimumThreshold;
};
