#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Student.h"

using namespace std;
int Student::getCourseIndex(string course_id){
  for (int i = 0; i < course_ids.size(); i++){
      if (course_ids.at(i) == course_id){
        return i;
      }
  }
  return -1;
}

void Student::addCourse(std::string course_id){
    bool duplicate = false;
    for (int i = 0; i < course_ids.size(); i++){
      if (course_ids.at(i) == course_id){
        duplicate = true;
        break;
      }
    }

    if(!duplicate){
        course_ids.push_back(course_id);
    }
}

void Student::listCourses(){
    cout << "Courses for " << get_id() << endl;
    for (int i = 0; i < course_ids.size(); i++){
        cout <<  course_ids.at(i) << endl;
    }
}
