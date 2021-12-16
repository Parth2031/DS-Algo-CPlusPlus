#include <iostream>
using namespace std;

void CountNoOfDigits(int num)
{
  int count=0;
  while(num!=0)
  {
    num=num/10;
    count++;
  }
  cout<<count;
}

void CountNoOfDigits2(int num)
{
  int temp=num, count=0;
  while(temp>0)
  {
    temp=temp/10;
    count++;
  }
  cout<<count;  
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter a number: ";
  cin>>n;
  cout<<"No. of Digits are: ";
  CountNoOfDigits(n);
  // cout<<"\t";
  // CountNoOfDigits2(n);
  cout<<endl;
  return 0;
}