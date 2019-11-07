#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Date.h"
#include "AttendanceRecord.h"

class Course {
  std::string id;
  std::string title;
  Date startTime;
  Date endTime;
  std::vector<AttendanceRecord> attendanceRecords;

public:
  Course(std::string student_id, std::string course_title, Date startTime, Date endTime) :
    id(student_id), title(course_title), startTime(startTime), endTime(endTime) {}

  std::string getID(){
    return id;
  };
  std::string getTitle(){
    return title;
  };
  Date getStartTime(){ //how do you return this??
    // int startHour;
    // int startMinute;
    // int startTime = Date::getHour(); 
    return startTime;
  };
  Date getEndTime(){
    return endTime;
  };

  void addAttendanceRecord(AttendanceRecord ar);
  void outputAttendance();
  void outputAttendance(std::string student_id);
};

#endif