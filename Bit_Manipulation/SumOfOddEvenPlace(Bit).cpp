// TODO:: OS: Sum of Odd Place Digit & ES: Sum of Even Place Digit.
// ? Example: 1460821997 as OS=22 & ES=25. 

#include<iostream>
using namespace std;

void SumOfOddEvenPlace(int n)
{
    
  cout<<OS<<" " <<ES<<endl;
}

int main(int args,char** argv)
{
  int n;
  cout<<endl<<"Enter the number: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {
      
    SumOfOddEvenPlace(n);  
  }
  return 0;
}