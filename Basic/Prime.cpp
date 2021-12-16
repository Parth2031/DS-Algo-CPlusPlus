// TODO:: There are 3 Questions: isPrime, PrimetillN and Checking Multiple "N" Prime Numbers.

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

void CheckMultiplePrimeNumbers(int t)
{
  int n;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    bool flag=true;

    if(n==0 || n==1)
      flag=false;
    for(int div=2; (div*2)<=n; div++)
    {
      if(n%div == 0)
      {
        flag=false;
        break;
      }  
    }

    if(flag)
      cout<<"Prime"<<endl;
    else
      cout<<"NotPrime "<<endl;
  }
}

int main(int args, char** argv)
{
  int x;
  cout<<endl<<"Enter the no. to find whether it is prime or not: ";
  cin>>x;

  // ? Check isPrime based Question:
  // int res=isPrime(x);
  // if(res<2)
  //   cout<<"Prime No.";
  // else
  //   cout<<"Not a Prime No.";

  // ? Prime till N based Question:
  //for(int i=0;i<=x;i++)
    //PrimetillN(i);

  // ? Checking Multiple N Prime Numbers:
  // int t;
  // cout<<endl<<"Enter No. of Times to Input a Number: ";
  // cin>>t;
  // cout<<"Checking Whether the Given Numbers are Prime or Not: ";
  // CheckMultiplePrimeNumbers(t);

  return 0;
}