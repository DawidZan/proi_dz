/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#ifndef Date_hpp
#define Date_hpp

#include <string>

class Date
{
  int day;
  int month;
  int year;
  int hour;
  int minute;

public:
  Date();
  Date(int,int,int,int,int);

  int getday();
  int getmonth();
  int getyear();
  int gethour();
  int getminute();

  int setday(int);
  int setmonth(int);
  int setyear(int);
  int sethour(int);
  int setminute(int);

  ~Date() {};

  friend std::ostream & operator<<(std::ostream &os, const Date &date);

};

#endif
