// TODO:: There are 2 Questions: isPrime and PrimetillN.

#include<iostream>
using namespace std;

int isPrime(int x)
{
  int s=0;    
  if(x==0 || x==1)
    return s=2;  
  else
  {
   for(int i=2;i<=x;i++)
   {
     int temp=x%i;
     if(temp==0)
       s++;  
   }
   return s;   
  }
}

void PrimetillN(int y)
{
  int s=0;    
  if(y==0 || y==1)
    s=2;
  else
  {
   for(int j=2;j<=y;j++)
   {
     int temp=y%j;
     if(temp==0)
       s++;  
   }
   if(s<2)
     cout<<y<<" ";     
  }
}

int main(int args, char** argv)
{
  int x;
  cout<<endl<<"Enter the no. to find whether it is prime or not: ";
  cin>>x;

  // ? Check isPrime based Question:
  // int res=checkPrime(x);
  // if(res<2)
  //   cout<<"Prime No.";
  // else
  //   cout<<"Not a Prime No.";

  // ? Prime till N based Question:
  //for(int i=0;i<=x;i++)
    //PrimetillN(i);

  return 0;
}