// TODO:: Print Nth Triangle where 1st Triangle=1, 2nd Triangle=1+2=3, 3rd Triangle=1+2+3=6,... So,5th Triangle=15,etc.
// ? Recursion in two ways:- Void Type and Return Type.

#include<iostream>
using namespace std;

int NthTriangle(int n,int sum)
{  
  if(n==0)
    return sum;

  // if(n==0)         // ! For Void Type <--
  // {
  //   cout<<sum;
  //   return;
  // }  

  sum+=n;
  NthTriangle(n-1,sum);
}

int Result(int n,int count)
{
  if(n==0)
   return count;

  count+=n; 
  Result(n-1,count); 
}

int NthTriangleDiff(int n)
{  
  int count=0,ans;  
  if(n==0)
    return ans;
   
   ans = Result(n,count);
}

int main(int args,char** argv)
{
  int num;
  cout<<endl<<"Enter the number of Triangle: ";
  cin>>num;
  cout<<"Triangle Value: "<<NthTriangle(num,0)<<endl;
  // cout<<"Another Method Triangle Value: "<<NthTriangleDiff(num)<<endl;
  return 0;
}