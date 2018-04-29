/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#include "Movie.hpp"
#include "Date.hpp"
#include "Schedule.hpp"
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{

  Movie d("Teraminator","Kowalski",11,54.);
  Movie e;
  Movie f("Rocky","Ktokolwiek",123,2.22);
  Schedule<Movie> sch(1,e);
  cout<<endl<<sch;
  Schedule<Movie> g(3,d,e,f);
  cout<<endl<<g;
  sch.add(d);
  cout<<endl<<sch;
  g.subtract(1);
  cout<<endl<<g;
  cout<<endl<<g.getMovie(1);

  Date a;
  Date b(1,2,3,4,5);
  d.setDate(a);
  d.setDate(b);
  d.showDates();

  return 0;
}
