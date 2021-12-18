                                       // TODO:: GCD means Greatest Common Divisor

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
  while(a != b)
  {
    if(a > b)
     a = a - b;
    else
     b = b - a;    
  }
  return a;
}

int LCM(int a, int b, int gcd)
{
  int lcm = (a * b) / gcd;
  return lcm;
}

int main(int args,char** argv)
{
  int a,b;
  cout<<endl<<"Enter the 1st number: ";
  cin>>a;
  cout<<"Enter the 2nd number: ";
  cin>>b;
  cout<<"Greatest Common Divisor(GCD): "<<GCD(a,b)<<endl;
  int gcd = GCD(a,b);
  cout<<"Lowest Common Multiple(LCM): "<<LCM(a,b,gcd)<<endl;
  return 0;
}


