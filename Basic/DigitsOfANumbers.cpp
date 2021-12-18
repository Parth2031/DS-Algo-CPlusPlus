// ^ Printing each digit of a Number.

#include <iostream>
#include <cmath>
using namespace std;

int CountNoOfDigits(int num)
{
  int count=0;
  while(num!=0)
  {
    num=num/10;
    count++;
  }
  return count;
}

void DigitsOfANumber(int n, int NumberOfDigits)
{
  int intialDivisor = (int)(pow(10, NumberOfDigits - 1));
  while(intialDivisor != 0)
  {
    int digit = n / intialDivisor;
    cout<<digit<<"\t";
    n = n % intialDivisor;
    intialDivisor = intialDivisor / 10;
  } 
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter a number: ";
  cin>>n;
  int count = CountNoOfDigits(n);
  cout<<"Digits of a Number are: ";
  DigitsOfANumber(n, count);
  cout<<endl;
  return 0;
}