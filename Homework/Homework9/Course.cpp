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