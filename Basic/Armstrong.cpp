// TODO:: Armstrong of a number:
// ? Example :-> 371 = (3*3*3)+(7*7*7)+(1*1*1)    
// *             where:    
// ^              (3*3*3)=27    
// ^              (7*7*7)=343    
// ^              (1*1*1)=1    
// *             So:    
// ^              27+343+1=371    

#include<iostream>  
using namespace std;  

int checkArmstrongNumber(int n)
{
  int r,sum=0;
  while(n>0)
  {
    r = n%10;
    sum += (r*r*r);
    n =n/10;
  }
  return sum;
}

int main(int args, char** argv)
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int res = checkArmstrongNumber(n);
  if(res == n)
    cout<<"Armstrong Number"<<endl;
  else  
    cout<<"Not a Armstrong Number";
  return 0;
}
