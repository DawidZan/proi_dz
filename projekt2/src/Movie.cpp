/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#include "Movie.hpp"
#include "Date.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

Movie::Movie()
{
  title="empty";
  author="empty";
  length=0;
  price=0.0;

}

Movie::Movie(string title,string author="empty", int length=0, float price=0.0)
:title(title),author(author),length(length),price(price)
{
  /*
  this.title=title;
  this.author=author;
  this.length=length;
  this.price=price;
  */
}

string Movie::gettitle()
{
  return title;
}

string Movie::getauthor()
{
  return author;
}

int Movie::getlength()
{
  return length;
}

float Movie::getprice()
{
  return price;
}


int Movie::settitle(string title)
{
  this->title=title;
  return 0;
}

int Movie::setauthor(string author)
{
  this->author=author;
  return 0;
}

int Movie::setlength(int length)
{
  this->length=length;
  return 0;
}

int Movie::setprice(float price)
{
  this->price=price;
  return 0;
}

int Movie::setDate(Date d)
{
  dates.push_back(d);
  return 0;
}

int Movie::showDates()
{
  cout<<"Dates:"<<endl;
  for( list<Date>::iterator iter=dates.begin(); iter != dates.end(); iter++ )
  {
    cout<<*iter<<endl;
  }
  return 0;
}

ostream & operator<<(std::ostream &os, const Movie &movie)
{
  os<<"title:"<<movie.title<<"  author:"<<movie.author<<" length="<<movie.length<<" price="<<fixed<<setprecision(2)<<movie.price<<endl;
  return os;
}
