/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 1
*/

#include "Calc.hpp"
#include <iostream>
using namespace std;

int main()
{
  Calc a;
  Calc b;
  Calc result;
  cin>>a>>b;
  result=a+b;
  cout<<result;
  result=a-b;
  cout<<result;
  result=a*b;
  cout<<result;
  result=a/b;
  cout<<result;
  show(result);
  show(a,b,result);
  return 0;
}
