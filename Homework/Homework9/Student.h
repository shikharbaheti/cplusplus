#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
  std::string id;
  std::string name;
  std::vector<std::string> course_ids;
  
public:
  Student(std::string student_id, std::string student_name) :
    id(student_id), name(student_name) {}

  std::string get_id(){
    return id;
  };

  std::string get_name(){
    return name;
  };
  
  void addCourse(std::string course_id);
  void listCourses();
  int getCourseIndex(std::string course_id);
};

#endif


// class Triangle{
//   int size;
//   int area;
//   Triangle(int number, int number2){
//     size = number;
//     area = number2;
//   }
// }