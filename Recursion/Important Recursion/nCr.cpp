#include <iostream>
using namespace std;

int fact(int n) 
{
  if(n==0)
    return 1;
  return fact(n-1)*n;
}

int CombinationFormula_WithoutRecursion(int n, int r)
{
  int t1,t2,t3;
  int num, den;
  t1 = fact(n);
  t2 = fact(r);
  t3 = fact(n-r);
   
  num = t1;
  den = t2 * t3;

  return num/den;
}

// ! Recursion using Pascal's Triangle

int nCr(int n,int r)
{
  if(r==0 || n==r)
    return 1;
  else
    return nCr(n-1,r-1) + nCr(n-1,r);              
}

int main(int args, char** argv)
{
  int x,y;
  cout<<endl<<"Enter the number for n: ";
  cin>>x;
  cout<<"Enter the number for r: ";
  cin>>y;
  // cout<<"Result of the Combination Formula without Recursion: "<<CombinationFormula_WithoutRecursion(x,y)<<endl;
  cout<<"Result of the Combination Formula (nCr): "<<nCr(x,y)<<endl;
  return 0;
}