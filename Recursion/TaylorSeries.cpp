// ^ Recursion working of 2 types ->> Head & Tail Recusion

#include <iostream>
using namespace std;

// * Recursion at Return Time means Tail Recusrion

double exponent(int x,int n)
{
  double result;
  static double fact = 1, pow = 1;

  if(n == 0)
    return 1;

  result = exponent(x, n-1);
  fact = fact * n;
  pow = pow * x;
  return result + (pow / fact);
}

// ? Recursion at Calling Time means Head Recursion

double exponent_hornetRule(int x, int n)
{
  static double s = 1;
   
  if(n == 0)
    return s;

  s = 1 + ((x*s)/n); 
  return exponent_hornetRule(x, n-1);   
}

int main(int args, char** argv)
{
  int m,n;
  cout<<endl<<"Enter the number: ";
  cin>>m;
  cout<<"Enter the power: ";
  cin>>n;
  cout<<endl<<"Taylor Series in Returning Time of a number: "<<exponent(m,n);
  cout<<endl<<"Taylor Series in Calling Time of a number: "<<exponent_hornetRule(m,n)<<endl; 
  return 0;
}