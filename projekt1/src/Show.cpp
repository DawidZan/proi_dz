/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 1
*/

#include "Calc.hpp"
#include <iostream>
using namespace std;

void Show::show(Calc result)
{
  cout<<result<<endl;
}

void Show::show(Calc first, Calc second, Calc result)
{
  cout<<first<<second<<result<<endl;
}
