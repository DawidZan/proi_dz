/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#include "Schedule.hpp"
#include "Movie.hpp"
#include <cstdarg>
#include <iostream>
using namespace std;

template <class Typ>
Schedule<Typ>::Schedule()
{
  n=1;
  s=new Typ[n];
}

template <class Typ>
Schedule<Typ>::Schedule(int b,Typ c,...)
{
  n=b;
  s=new Typ[n];
  s[0]=c;
  va_list ap;
  va_start(ap,c);
  for (int i=1; i<n; i++)
  {
    s[i]=va_arg(ap,Typ);
  }
  va_end(ap);
}


template <class Typ>
int Schedule<Typ>::add(Typ a)
{
  n=n+1;
  Typ *temp= new Typ[n];
  for(int i=0;i<n-1;i++)
  {
    temp[i]=s[i];
  }
  temp[n-1]=a;
  s=temp;
  delete [] temp;
  return 0;
}

template <class Typ>
int Schedule<Typ>::subtract(int k)
{
  n-=1;
  Typ *temp= new Typ[n];
  for(int j=0;j<n+1;j++)
  {
    if(j<k)
    {
      temp[j]=s[j];
    }
    if(j>k)
    {
      temp[j-1]=s[j];
    }
  }
  s=temp;
  delete [] temp;
  return 0;
}

template <class Typ>
Typ Schedule<Typ>::getMovie(int k)
{
  return s[k];
}


template <class U>
ostream & operator<<(std::ostream &os, const Schedule<U> &schedule)
{
  for(int i=0;i<schedule.n;i++)
  {
    os<<schedule.s[i]<<endl;
  }
  return os;
}

template int Schedule<Movie>::add(Movie a);
template int Schedule<Movie>::subtract(int k);
template Movie Schedule<Movie>::getMovie(int k);
template Schedule<Movie>::Schedule();
template Schedule<Movie>::Schedule(int n,Movie c,...);
template ostream & operator<<(std::ostream &os, const Schedule<Movie> &schedule);
