#include <iostream>
#include <fstream>
#include <string>
#include "Course.h"
#include "Date.h"
#include "AttendanceRecord.h"

using namespace std;

void Course::addAttendanceRecord(AttendanceRecord ar){
    if ((ar.getDate()>=startTime) && (ar.getDate()<=endTime)){
        attendanceRecords.push_back(AttendanceRecord(ar.getCourseID(), ar.getStudentID(), ar.getDate()));
    }
}

void Course::outputAttendance(){
    for (int i = 0; i < attendanceRecords.size(); i++){
        cout << attendanceRecords.at(i).getDate().getDate() << "," << attendanceRecords.at(i).getCourseID() << "," << attendanceRecords.at(i).getStudentID() << endl;
    }
}

void Course::outputAttendance(std::string student_id){
    bool reallyCanFind;
    if (attendanceRecords.size() == 0){
        cout << "No Records" << endl;
    }
    else {
        for (int i = 0; i < attendanceRecords.size(); i++){
            if (attendanceRecords.at(i).getStudentID() == student_id){
                reallyCanFind = true;
            cout << attendanceRecords.at(i).getDate().getDate() << "," << attendanceRecords.at(i).getCourseID() << "," << attendanceRecords.at(i).getStudentID() << endl;
            }
            else {
                reallyCanFind = false;
            }
        }
        if (reallyCanFind = false){
            cout << "No Records" << endl;
        }
    }
}