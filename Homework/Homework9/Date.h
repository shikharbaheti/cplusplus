#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
  long timestamp;

  int year;
  int month;
  int day;
  int hour;
  int min;
  int sec;
  
public:
  Date(int year, int month, int day, int hour, int min, int sec);
  Date(int hour, int min, int sec=0); 
  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }
  int getHour() { return hour; }
  int getMin() { return min; }
  int getSec() { return sec; }
  std::string getDate();
  bool operator<=(Date d);
  bool operator>=(Date d);
};

#endif