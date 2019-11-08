#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <iomanip>
#include "School.h"
#include "AttendanceRecord.h"

using namespace std;

void School::addStudents(string filename) {
  ifstream ifs(filename);
  if (!ifs.is_open()) {
    cout << "Unable to open file: " << filename << endl;
    return;
  }
  while (!ifs.eof()) {
    string line;
    getline(ifs, line);
    istringstream ss(line);
    string uin;
    getline(ss, uin, ',');
    string name;
    getline(ss, name);
    if (!ss.fail()) {
      students.push_back(Student(uin, name));
    }
  }
}

void School::listStudents(){
  if (students.size() == 0){
    cout << "No Students" << endl;
  }
  else {
      for (int i = 0; i < students.size(); i++){
      cout << students[i].get_id() << "," << students[i].get_name() << endl;
      }
  }
}

void School::addCourses(string filename) {
  ifstream ifs(filename);
  if (!ifs.is_open()) {
    cout << "Unable to open file: " << filename << endl;
    return;
  }
  while (!ifs.eof()) {
    string line;
    getline(ifs, line);
      if (line.empty()){

      }
    else {
    istringstream ss(line);
    string ID;
    getline(ss, ID, ',');
    string startHour;
    getline(ss, startHour, ':');
    string startMinute;
    getline(ss, startMinute, ',');
    string endHour;
    getline(ss, endHour, ':');
    string endMinute;
    getline(ss, endMinute, ',');
    string title;
    getline(ss, title);
    Date startTime(stoi(startHour), stoi(startMinute), 0);
    Date endTime(stoi(endHour), stoi(endMinute), 0);
      if (!ss.fail()) {
        courses.push_back(Course(ID, title, startTime, endTime));
      }
    }
  }
}

void School::listCourses(){
  if (courses.size() == 0){
    cout << "No Courses" << endl;
  }
  else {
      //cout << courses[0].getID() << endl;
        for (int i = 0; i < courses.size(); i++){
          cout << courses[i].getID() << "," << setw(2) << setfill('0') <<  courses[i].getStartTime().getHour() << ":" << setw(2) << setfill('0') << courses[i].getStartTime().getMin() << "," << setw(2) << setfill('0') << courses[i].getEndTime().getHour() << ":" << setw(2) << setfill('0') << courses[i].getEndTime().getMin() << "," << courses[i].getTitle() << endl;
      }
  }
}

  void School::addAttendanceData(string filename) {
  ifstream ifs(filename);
  if (!ifs.is_open()) {
    cout << "Unable to open file: " << filename << endl;
    return;
  }
  while (!ifs.eof()) {
    while (!ifs.eof()) {
    string line;
    getline(ifs, line);
      if (line.empty()){

      }
    else {
    istringstream ss(line);
    string year;
    getline(ss, year, '-');
    string month;
    getline(ss, month, '-');
    string day;
    getline(ss, day, ' ');
    string startHour;
    getline(ss, startHour, ':');
    string endMinute;
    getline(ss, endMinute, ',');
    string title;
    getline(ss, title);
    Date startTime(stoi(startHour), stoi(startMinute), 0);
    Date endTime(stoi(endHour), stoi(endMinute), 0);
      if (!ss.fail()) {
        courses.push_back(Course(ID, title, startTime, endTime));
      }
    }
  }
}

