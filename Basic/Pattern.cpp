// TODO:: There are Various Types of Pattern and it's result output is at buttom-->

// ? Some abbreviation in Pattern Questions are: csp-count of spaces & nsp-number of spaces.
// !                                           : cst-count of stars  &  nst-number of stars.

#include<iostream>
using namespace std;

void pattern_1(int n)
{
  int nst=1;
  int nsp=n-1;
  for(int i=1;i<=n;i++)
  {
    for(int csp=1;csp<=nsp;csp++)
      cout<<" ";
    for(int cst=1;cst<=nst;cst++)
      cout<<"*";

    cout<<endl;
    nsp--;
    nst++;    
  }
}

void pattern_2(int n)
{
  int nst=1;
  for(int i=1;i<=n;i++)
  {
    for(int cst=1;cst<=nst;cst++)
      cout<<"*";

    cout<<endl;
    nst++;    
  }
}

void pattern_3(int n)
{
  int nst=1;
  int nsp=n+3;
  for(int i=1;i<=n;i++)
  {
    for(int csp=1;csp<=nsp;csp++)
      cout<<" ";
    for(int cst=1;cst<=nst;cst++)
      cout<<"* ";

    cout<<endl;
    nsp-=2;
    nst+=2;    
  }
}

void pattern_4(int n)
{
  int i;  
  int nst=1;
  int nsp=n/2;
  for(i=1;i<=n;i++)
  {
    for(int csp=1;csp<=nsp;csp++)
      cout<<" ";
    for(int cst=1;cst<=nst;cst++)
      cout<<"*";

    cout<<endl; 
    if(i<=(n/2))
    {
      nsp--;
      nst+=2;   
    }
    else
    {
      nsp++;
      nst-=2;
    }
  }
}

void pattern_5(int n)
{
  int i;  
  int nst=1;
  int nsp=n-1;
  for(i=1;i<(2*n);i++)
  {
    for(int csp=1;csp<=nsp;csp++)
      cout<<" ";
    for(int cst=1;cst<=nst;cst++)
      cout<<"*";

    cout<<endl; 
    if(i<n)
    {
      nsp--;
      nst+=2;   
    }
    else
    {
      nsp++;
      nst-=2;
    }
  }
}

void pattern_6(int n)
{
  int i;  
  int nst=1;
  int nsp=n/2;
  for(i=1;i<=n;i++)
  {
    int value=i;
    if(i>(n/2)+1)
      value = n - i + 1;

    for(int csp=1;csp<=nsp;csp++)
      cout<<"  ";
    for(int cst=1;cst<=nst;cst++)
    {
      cout<<value<<" ";
      if(cst<=nst/2)  
        value++;
      else
        value--;  
    }
    cout<<endl; 
    if(i<=(n/2))
    {
      nsp--;
      nst+=2;   
    }
    else
    {
      nsp++;
      nst-=2;
    }
  }
}

void pattern_7(int n)
{
  int i;  
  int nst=1;
  int nsp=n/2;
  for(i=1;i<=n;i++)
  {
    int value=i;
    if(i>(n/2)+1)
      value = n - i + 1;

    for(int csp=1;csp<=nsp;csp++)
      cout<<"  ";
    for(int cst=1;cst<=nst;cst++)
    {
      cout<<value<<" ";
      if(cst<=nst/2)  
        value--;
      else
        value++;  
    }
    cout<<endl; 
    if(i<=(n/2))
    {
      nsp--;
      nst+=2;   
    }
    else
    {
      nsp++;
      nst-=2;
    }
  } 
}

int main(int args,char** argv)
{
  int num;
  cout<<endl<<"Enter the number of pattern: ";
  cin>>num;
  //pattern_1(num);
  //pattern_2(num);
  //pattern_3(num); 
  //pattern_4(num);
  //pattern_5(num);
  //pattern_6(num); 
  pattern_7(num);
  return 0;
}

/* Output-1: Mirror Half Pyamid
       *
      **
     ***
    **** 
   *****  
*/  

/* Output-2: Half Pyamid
   *
   **
   ***
   ****
   *****
*/

/* Output-3: Pyramid
           *
         * * *
       * * * * *
     * * * * * * *
   * * * * * * * * *
*/

/* Output-4: Diamond
       *
      ***
     *****
      ***
       *
*/

/* Output-5: Mega Diamond
       *
      ***
     *****
    *******
   *********
    *******
     *****
      ***
       *
*/

/* Output-6: Number increasing Diamond
       1
     2 3 2
   3 4 5 4 3
 4 5 6 7 6 5 4
   3 4 5 4 3
     2 3 2
       1
*/          

/* Output-7: Number Decreasing Diamond
       1
     2 1 2
   3 2 1 2 3
     2 1 2
       1
*/         