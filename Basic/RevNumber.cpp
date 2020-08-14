// ^ Print a Number in it's Reverse Order. Example:--> 9312 as 2139,etc.

#include<iostream>
using namespace std;

int main(int args,char** argv)
{
  cout<<endl<<"Enter the number: ";
  int n,z=0;
  cin>>n;
  while (n>0)
  {
    int k=n%10;
    n=n/10;
    z=(z*10)+k;
  }
  cout<<z;
  return 0;
}

