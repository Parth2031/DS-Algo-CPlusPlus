// TODO:: Factorial of a Number:

#include<iostream>
using namespace std;

int main(int args, char** argv)
{
  int n,fact=1;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=1;i<=n;i++)
    fact=fact*i;
  cout<<"Factorial of a number: "<<fact;  
  return 0;
}