// ^ Inverse Number means changing the Number according to their position indexes.
// ? Example - "2134" as "1243"
// * It will have key constraints such as if Number is 5 digit long then it should have numbers ranging from 1-5 due to their indexes.
// ! We check from Right to Left
// & OriginalPosition (op) means Original Index.

#include <iostream>
#include <cmath>
using namespace std;

int InversedNumber(int n)
{
  int invNum = 0;
  int originalPosition = 1;
  while(n!=0)
  {
    int originalDigit = n % 10;
    int invDigit = originalPosition;
    int invPosition = originalDigit;

    invNum = invNum + invDigit * (int)(pow(10,invPosition-1)+0.5);

    n = n / 10;
    originalPosition++;
  }
  return invNum;
}

int InvertedNumberAlternative(int n)
{
  int inv = 0;
  int power = 1;
  while(n != 0)
  {
    int digit = n % 10;
    n = n / 10;
    inv += power * (int)(pow(10, digit - 1) +0.5);
    power++;
  }
  return inv;
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter a Number: ";
  cin>>n;
  cout<<"Inversed Number: ";
  // cout<<InversedNumber(n)<<endl;
  cout<<InvertedNumberAlternative(n)<<endl;
  return 0;
}