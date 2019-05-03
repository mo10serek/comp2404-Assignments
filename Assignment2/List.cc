#include "List.h"

// constructor
List::List() : head(0) { }

// destructor
List::~List() {
  Node* currNode = head;  
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(/*input*/ Course* course) {
  // this function put the course in the list in order

  // all the nodes for set up
  Node* newNode;
  Node* currNode;
  Node* prevNode;

  // set up the new node with the course to put in the the class
  newNode = new Node;
  newNode->data = course;
  newNode->next = 0;

  // set the current node to be the head
  currNode = head;
  prevNode = NULL;
   
  // go though the linklist until find the course that is less the one you are passing
  while (currNode != NULL) {
    cout << currNode->data->lessThan(course) << endl;
    if (currNode->data->lessThan(course)) {
      break;  
    }
    prevNode = currNode;
    currNode = currNode->next;
  }

  // in the empty list
  if ((prevNode == NULL) and (currNode == NULL)) {
   
    head = newNode;
    tail = newNode;
  // in the head
  } else if (prevNode == NULL) {
   
    newNode->next = currNode;
    head = newNode;
  // in the tail
  } else if (currNode == NULL) {
    
    tail = newNode;
    prevNode->next = tail;
  } else {
  // somewhere in the middle
    newNode->next = currNode;
    prevNode->next = newNode;
  }
}

void List::print() {
  // this function print out all the nodes and tell which one is the head and tail
  Node* currNode = head;
  
  // print out the nodes
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
  
  // print the head
  cout << "------ head ------" << endl;
  head->data->print();
  // print the tail
  cout << "------ tail ------" << endl;
  tail->data->print();
}

