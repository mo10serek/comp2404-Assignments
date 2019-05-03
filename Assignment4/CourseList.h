#include "List.h"

// this class is used to get the implementation of the template class
class CourseList: public List<Course> {
  public:
    float computeGPA();
    int computeNumFW();
};

