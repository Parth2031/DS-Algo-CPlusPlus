                                       // TODO:: GCD means Greatest Common Divisor

#include<iostream>
using namespace std;

int main(int args,char** argv)
{
  int a,b;
  cout<<endl<<"Enter the 1st number: ";
  cin>>a;
  cout<<"Enter the 2nd number: ";
  cin>>b;
  while(a!=b)
  {
    if(a>b)
      a=a-b;
    else
      b=b-a;    
  }
  cout<<"Greatest Common Divisor(GCD): "<<a<<endl;
  return 0;
}


