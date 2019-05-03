#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include "StuServer.h"
#include <vector>
#include <string>

// this class takes control of the storage and the view object

class Control {
  //data members
  private:
    Storage storage;
    vector<Monitor*> monitorsList;
    View view;
    StuServer stuServer;

  // members function
  public:
    Control();
    ~Control();
    void launch(); // launch the program
    void notify(Student* /*input*/);
};
