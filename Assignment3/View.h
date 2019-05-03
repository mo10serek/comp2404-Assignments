
#include "Course.h"
#include "Storage.h"

// this class takes control of the user input and output
class View {
  public:
    int mainMenu(); // this function makes the main menu
    void readingId(int& stuId/*input output*/); // this fuction takes the user input of the student id
    void readingCourse(int& courseCode/*input output*/, int& grade/*input output*/, int& date/*input output*/, string& instructor/*input output*/); // this function takes the user input of all the information of the course
    void printStorage(Storage& storage/*output*/); // this function prints dll the information in the storage
};
