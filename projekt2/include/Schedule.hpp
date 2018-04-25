/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#ifndef Schedule_hpp
#define Schedule_hpp

#include <iostream>

template <class Typ>
class Schedule
{
public:
  int n;
  Typ *s;

  Schedule();
  Schedule(int,Typ,...);

  int add(Typ);
  int subtract(int);
  Typ getMovie(int);

  template <class U> friend std::ostream& operator<<(std::ostream& os, const Schedule<U> &schedule);
};

#endif
