#include "Course.h"

class List {
  class Node
  {
    friend class List;
    private:
    Course* data;
    Node* next;
  };

  public:
    List();
    ~List();
    void add(Course* /*input*/);
    void print();
    float computeGPA();
    int computeNumFW();

  private:
    Node* head;
    Node* tail;
};
