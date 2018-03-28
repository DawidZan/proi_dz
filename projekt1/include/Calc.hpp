/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 1
*/

#ifndef calc_hpp
#define calc_hpp

#include <string>

class Calc
{
  std::string value;


public:
  Calc();
  Calc(std::string);

  std::string get();

  int set(std::string);

  Calc operator+(const Calc &) ;
  Calc operator-(const Calc &) ;
  Calc operator*(const Calc &) ;
  Calc operator/(const Calc &) ;

  bool isbin(std::string);
  int bintodec(std::string);
  std::string dectobin(int);
  double losuj();
  void show(Calc);
  void show(Calc, Calc, Calc);

  ~Calc() {};

  friend std::ostream & operator<<(std::ostream &os, const Calc &cal);
  friend std::istream & operator>>(std::istream &is, Calc &cal);

};

#endif
