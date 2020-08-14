// ? There are 3 Questions :-->
// ^ (1) Print Triangle & (2) Inverted Triangle Pattern using Recursion.
// & (3) Print Binomial Pattern using Recursion.
// ! Recursion in this type of Question can be done only by Void Type.

#include<iostream>
using namespace std;

void Print_Star(int i)
{
  if(i==0)
    return;
  
  cout<<"*";
  Print(i-1);
}

void Pattern_1(int n,int i)
{
  if(n==0)
    return;

  Print_Star(i);
  cout<<endl;

  Pattern_1(n-1,i+1);  
}

void Pattern_2(int n)
{
  if(n==0)
    return;

  Print_Star(n);
  cout<<endl;

  Pattern_2(n-1);  
}

void Print_Number(int i)
{

}

void Pattern_3(int n)
{

}

int main(int args,char** argv)
{
  int num;
  cout<<endl<<"Enter the number of Pattern: ";
  cin>>num;
  // Pattern_1(num,1);
  // Pattern_2(num);
  Pattern_3(num);
  return 0;
}

/* Pattern-1: Triangle using Recursion 
    *
    **
    ***
    ****
    *****
*/  

/* Pattern-2: Inverted Triangle using Recursion 
    *****
    ****
    ***
    **
    *
*/  

/* Pattern-3: Binomial Pattern using Recursion
    1                                       
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
*/