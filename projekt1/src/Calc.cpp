/*
*Dawid Zaniewski
*271286
*Wiktor Kusmirek
*projekt 1
*/

#include "Calc.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>
using namespace std;

Calc::Calc()
{
  value="0";
}

Calc::Calc(string val)
{
  value=val;
}

string Calc::get()
{
  int decVal;
  decVal=bintodec(value);
  cout<<"Value (bin):"<<value<<" dec:"<<decVal<<endl;
  string trr=dectobin(decVal);
  cout<<trr<<endl;
  return value;
}

int Calc::set(string val)
{
  value=val;
  int decVal=bintodec(value);
  cout<<"Value (bin):"<<value<<" dec:"<<decVal<<endl;
  return 0;
}

bool Calc::isbin(string a)
{
	//zwraca 1 gdy binarna
	//zwraca zero gdy niebinarna
	int length=a.length();
	for (int i=0; i<length;i++)
	{
		if((a[i]-'0')!=0 && (a[i]-'0')!=1) return 0;
	}
	return 1;
}

int Calc::bintodec(string a)
{
	int b=0;
	int length=a.length();
	for(int i=0; i<length; i++)
	{
		b=b+pow(2,length-i-1)*(a[i]-'0');
	}
	return b;
}

string Calc::dectobin(int a)
{
  stringstream ss;
  string str;
	int i=0, tab[31];
	char b;
	string c;
	while(a)
	{
		tab[i]=a%2;
		a/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
    ss << tab[j];
    str = ss.str();

	}
	return str;
}

double Calc::losuj()
{
	srand(time(NULL));
	return rand();
}

void Calc::show(Calc result)
{
  cout<<result<<endl;
}

void Calc::show(Calc first, Calc second, Calc result)
{
  cout<<first<<second<<result<<endl;
}

Calc Calc::operator+(const Calc &second)
{
  Calc result;
  int a=losuj();
  if(a%2==1)
    result=dectobin(a);
  else
    result=dectobin(bintodec(value)+bintodec(second.value));
  return result;
}

Calc Calc::operator-(const Calc &second)
{
  Calc result;
  int a=losuj();
  if(a%2==1)
    result=dectobin(a);
  else
    result=dectobin(bintodec(value)-bintodec(second.value));
  return result;
}

Calc Calc::operator*(const Calc &second)
{
  Calc result;
  int a=losuj();
  if(a%2==1)
    result=dectobin(a);
  else
    result=dectobin(bintodec(value)*bintodec(second.value));
  return result;
}

Calc Calc::operator/(const Calc &second)
{
  Calc result;
  int a=losuj();
  if(a%2==1)
    result=dectobin(a);
  else
    result=dectobin(bintodec(value)/bintodec(second.value));
  return result;
}

ostream & operator <<(ostream &os, const Calc &cal)
{
  os<<cal.value<<endl;
  return os;
}

istream & operator >>(istream &is, Calc &cal)
{
  is>>cal.value;
  return is;
}
