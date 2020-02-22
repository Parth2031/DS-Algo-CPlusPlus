// TODO:: There are 2 Questions: Print Fibonacci and Fibonacci Till N.

#include<iostream>
using namespace std;

int Fib(int n)
{
  int a=0,b=1,s=0;
  if(n==0)
    return 0;
  for(int i=2;i<=n;i++)
  {
    s=a+b;
    a=b;
    b=s;
  }  
  return b; // ! Here we returned 'b' instead of 's' because for n=2, it should return 1 but instead it will return 0. 
  // ? So, in fibonacci there are two exceptional case: n=0 & n=1
}

void FibtillN(int check)
{
  int a=0,b=1,s=0,i;
  if(check!=0)
    cout<<a<<" "<<b;
  else
    cout<<a; 

  while(true)
  {  
    s=a+b;
    if(s<=check)
    {
     cout<<" "<<s;
     a=b;
     b=s;
    }
    else
      break;
  }    
}

int main(int args,char** argv)
{
  int n,x;
  // ? Print Fibonacci of Desired Number Position based Question: 
  //cout<<endl<<"Enter the desired number position: ";
  //cin>>n;
  //cout<<"Result of Fibonacci: "<<Fib(n)<<endl;

  // ? Fibonacci till N based Question:
  cout<<endl<<"Enter the number: ";
  cin>>x;
  cout<<"Result of Fibonacci Till N: "<<FibtillN(x);  
  
  return 0;
}