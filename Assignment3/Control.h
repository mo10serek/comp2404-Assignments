#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include <vector>

// this class takes control of the storage and the view object

class Control {
  //data members
  protected:
    Storage storage;
    View view;
    vector<Monitor*> monitorsList;

  // members function
  public:
    Control();
    ~Control();
    virtual void launch(); // launch the program
    virtual void notify(Student* /*input*/);
};
