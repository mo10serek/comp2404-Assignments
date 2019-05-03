#include "Control.h"

class ConcreteControl: public Control {

  // members function
  public:
    ConcreteControl();
    ~ConcreteControl();
    virtual void launch(); // launch the program
    virtual void notify(Student* /*input*/);
    
};
