/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#include "Date.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Date::Date()
{
  day=0;
  month=0;
  year=0;
  hour=0;
  minute=0;
}

Date::Date(int day, int month, int year, int hour, int minute)
:day(day),month(month),year(year),hour(hour),minute(minute)
{}


int Date::getday()
{
  cout<<day;
  return day;
}

int Date::getmonth()
{
  cout<<month;
  return month;
}

int Date::getyear()
{
  cout<<year;
  return year;
}

int Date::gethour()
{
  cout<<hour;
  return hour;
}

int Date::getminute()
{
  cout<<minute;
  return minute;
}

int Date::setday(int day)
{
  this->day=day;
  return 0;
}

int Date::setmonth(int month)
{
  this->month=month;
  return 0;
}

int Date::setyear(int year)
{
  this->year=year;
  return 0;
}

int Date::sethour(int hour)
{
  this->hour=hour;
  return 0;
}

int Date::setminute(int minute)
{
  this->hour=hour;
  return 0;
}

ostream & operator <<(ostream &os, const Date &date)
{
  os<<setw(2)<<date.day<<"."<<setw(2)<<date.month<<"."<<setw(4)<<date.year<<"; "<<setw(2)<<date.hour<<":"<<setw(2)<<date.minute<<endl;
  return os;
}
