#ifndef ATTENDANCERECORD_H
#define ATTENDANCERECORD_H

#include <string>
#include "Date.h"

class AttendanceRecord {
  std::string course_id;
  std::string student_id;
  Date time;

public:
  AttendanceRecord(std::string course_id, std::string student_id, Date time) :
  course_id(course_id), student_id(student_id), time(time) {}
  std::string getCourseID(){
    return course_id;
  };
  std::string getStudentID(){
    return student_id;
  };
  Date getDate(){
    return time;
  };
};

#endif