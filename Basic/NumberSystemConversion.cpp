// ^ Decimal To Base 2 or 8 means Dividing the number froms its base and print its reaminder from bottom to top.
// ? Any Base To Decimal means dividing the number by 10 and sum all after multiplying its remainder with power(base,0 to n-1);
// * Default base value = Decimal(10)
// & Example - (172)base8 to (122)base10 to (1111010)base2.

#include <iostream>
#include <cmath>
using namespace std;

int DecimalToAnyBase(int n, int b)
{
  int res = 0, multiplier = 1;
  while(n > 0)
  {
    int remainder = n % b;
    n = n / b;
    res += remainder * multiplier;
    multiplier *= 10; 
  }
  return res;
}

int AnyBaseToDecimal(int n, int b)
{
  int res = 0, multiplier = 0;
  while(n!=0)
  {
    int rem = n % 10;
    n = n / 10;
    res += rem * (int)(pow(b,multiplier)+0.5);
    multiplier++;
  }
  return res;
}

int AnyBaseToAnyBase(int n, int b1, int b2)
{ 
  int decimalNumber = AnyBaseToDecimal(n,b1);
  int res = DecimalToAnyBase(decimalNumber,b2);
  return res; 
}

int main(int args, char** argv)
{
  int n, base;
  cout<<endl<<"Enter a Number: ";
  cin>>n;
  cout<<"Enter a Base from 2,8,16,etc: ";
  cin>>base;
  cout<<"Decimal Base to Any Base: "<<DecimalToAnyBase(n, base)<<endl;
  cout<<"Any Base to Decimal: "<<AnyBaseToDecimal(n, base)<<endl;

  // int b1, b2;
  // cout<<"Enter Base 1 which is Base Value of Given Number: ";
  // cin>>b1;
  // cout<<"Enter Base 2 for Result Value: ";
  // cin>>b2;
  // cout<<"Any Base to Any Base: "<<AnyBaseToAnyBase(n, b1, b2)<<endl;
  return 0;
}