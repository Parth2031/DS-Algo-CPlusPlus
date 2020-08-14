// ^ Input a number like:{13355335} and digit like:{3}. Each and every index number will be compared by digit and counts as output so Result:{4}.

#include<iostream>
using namespace std;

int LengthOfIntegerNumber(int n)
{
  int len=1;
  if(n>0)
  {
    for(len=0;n>0;len++)
      n=n/10;
  } 
  return len; 
}

int NumberofTimesADigitOccurs(int n,int d,int length)
{
  int count=0,rem;  
  for(int i=0;i<length;i++)   
  {
    rem=n%10;
    if(rem==d)
      count++;
    n=n/10;
  }  
  return count; 
}

int main(int args,char** argv)
{
  int n,d,lengthOfNum;
  cout<<endl<<"Enter the number: ";
  cin>>n;
  cout<<"Enter the digit: ";
  cin>>d;
  if(n<1 || d>9 || d<0)
    exit(0);
  else
  {  
    lengthOfNum = LengthOfIntegerNumber(n);
    int result = NumberofTimesADigitOccurs(n,d,lengthOfNum);
    cout<<"Number of Times a Digit Occurs: "<<result<<endl;
  }
  return 0;
}
