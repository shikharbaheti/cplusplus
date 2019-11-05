#include <ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date(int year, int month, int day, int hour, int min, int sec) :
    year(year), month(month), day(day), hour(hour), min(min), sec(sec) {}
    
Date::Date(int hour, int min, int sec) 
  : timestamp(0), year(0), month(0), day(0), 
    hour(hour), min(min), sec(sec) {}

string Date::getDate() {
  stringstream ss;
  ss << month << "/" << day << "/" << year << " ";
  ss << setw(2) << setfill('0') << hour << ":"; 
  ss << setw(2) << setfill('0') << min << ":";
  ss << setw(2) << setfill('0') << sec;
  return ss.str();
}

bool Date::operator<=(Date d) {
  // only use hour, min, and sec to compare with generic course times
  if (this->hour < d.hour) {
    return true;
  }
  else if ((this->hour == d.hour) && (this->min < d.min)) {
    return true;
  }
  else if ((this->min == d.min) && (this->sec < d.sec)) {
    return true;
  }
  else if (this->sec == d.sec) {
    return true;
  }

  return false;
}

bool Date::operator>=(Date d) {
  // only use hour, min, and sec to compare with generic course times
  if (this->hour > d.hour) {
    return true;
  }
  else if ((this->hour == d.hour) && (this->min > d.min)) {
    return true;
  }
  else if ((this->min == d.min) && (this->sec > d.sec)) {
    return true;
  }
  else if (this->sec == d.sec) {
    return true;
  }

  return false;
}