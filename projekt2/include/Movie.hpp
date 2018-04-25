/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 2
*/

#ifndef Movie_hpp
#define Movie_hpp
#include <list>
#include <string>
#include "Date.hpp"

class Movie
{
  std::string title;
  std::string author;
  int length;
  float price;
  std::list<Date> dates;

public:


  Movie();
  Movie(std::string,std::string,int,float);

  std::string gettitle();
  std::string getauthor();
  int getlength();
  float getprice();

  int settitle(std::string);
  int setauthor(std::string);
  int setlength(int);
  int setprice(float);

  int setDate(Date);
  int showDates();

  ~Movie() {};

  friend std::ostream & operator<<(std::ostream &os, const Movie &movie);

};

#endif
