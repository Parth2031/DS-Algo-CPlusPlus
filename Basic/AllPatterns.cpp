// TODO:: There are Various Types of Pattern and it's result output is at buttom -->

// ! Some abbreviation in Pattern Questions are: csp-count of spaces & nsp-number of spaces.
// ?                                           : cst-count of stars  & nst-number of stars.

#include<iostream>
using namespace std;

void pattern_1(int n)
{
  if(n==0)
    cout<<" ";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
      cout<<"*"<<" ";
    cout<<endl;  
  }
}

void diamond_1(int n)  // ! Pattern-2
{
  int space = n - 1; 
  if(n==0)
    cout<<" ";
  for(int i=0;i<n;i++)
  {
    for (int j = 0;j < space; j++) 
			cout << " "; 
    for (int j = 0; j <= i; j++) 
   		cout << "* "; 

		cout << endl; 
		space--;   
  }
  space = 0; 
  for (int i = n; i > 0; i--) 
	{ 
		for (int j = 0; j < space; j++) 
			cout << " ";  
		for (int j = 0;j < i;j++) 
			cout << "* "; 

		cout << endl; 
		space++; 
	}  
}

void diamond_2(int n)  // ! Pattern-2
{
  int space = n - 1; 
  if(n==0)
    cout<<" ";
  for(int i=1;i<=((n/2)+1);i++)
  {
    for (int j = 0;j < space; j++) 
			cout << " "; 
    for (int j = 1; j <= ((2*i)-1); j++) 
   		cout << "* "; 

		cout << endl; 
		space-=2;   
  }
  space = 2; 
  for (int i = (n/2); i > 0; i--) 
	{ 
		for (int j = 0; j < space; j++) 
			cout << " ";  
		for (int j = 1;j <= ((2*i)-1);j++) 
			cout << "* "; 

		cout << endl; 
		space+=2; 
	}  
}

void diamond_3(int n)  // ! Pattern-2
{
  int space = n/2; 
  if(n==0)
    cout<<" ";
  for(int i=1;i<=((n/2)+1);i++)
  {
    for (int j = 0;j < space; j++) 
			cout << " "; 
    for (int j = 1; j <= ((2*i)-1); j++) 
   		cout << "*"; 

		cout << endl; 
		space--;   
  }
  space = 1; 
  for (int i = (n/2); i > 0; i--) 
	{ 
		for (int j = 0; j < space; j++) 
			cout << " ";  
		for (int j = 1;j <= ((2*i)-1);j++) 
			cout << "*"; 

		cout << endl; 
		space++; 
	}  
}

void pattern_3(int n)
{
  int i;    
  if(n==0)
    cout<<" ";
  int nsp=1,nst=((n/2)+1),nstt=((3*n)/2);
  for(i=1;i<=n;i++)
  {
    for(int cst=1;cst<=nst;cst++)
      cout<<"*";
    for(int csp=1;csp<=nsp;csp++)
      cout<<" ";
    for(int cstt=n;cstt<=nstt;cstt++)
      cout<<"*";  

    cout<<endl;
    if(i<=(n/2)) 
    {
      nst--;
      nsp+=2;
      nstt--;
    }
    else
    {
      nst++;
      nsp-=2;
      nstt++;
    }
  }
}

void pattern_4(int n)
{
  int i;    
  if(n==0)
    cout<<" ";
  int nspl=1,nstl=1,nspm,nstr=1,nspr=1;  
  if(n%3==0)
    nspm=n/2;
  else
    nspm=((3*n)/4);  
  for(i=1;i<=n;i++)
  {
    for(int cspl=1;cspl<nspl;cspl++)
      cout<<" ";  
    for(int cstl=1;cstl<=nstl;cstl++)
      cout<<"*";
    for(int cspm=1;cspm<=nspm;cspm++)
      cout<<" ";  
    for(int cstr=1;cstr<=nstr;cstr++)
    {
      if(i==((n/2)+1))
        cout<<"";
      else
        cout<<"*";         
    }    
    for(int cspr=1;cspr<nspr;cspr++)
      cout<<" ";

    cout<<endl;
    if(i<=(n/2)) 
    {
      nspl++;
      nspm-=2;
      nspr++;
    }
    else
    {
      nspl--;
      nspm+=2;
      nspr--;
    }
  }
}

void pattern_5a(int n)  // ! Number Pattern-5(a)
{
  int i,value,diff;    
  if(n==0)
    cout<<" ";
  for(i=1;i<=n;i++)
  {
    value=i;
    diff=n-1;
    for(int j=1;j<=i;j++)
    {
      cout<<value<<" ";
      value+=diff;
      diff--;   
    }

    cout<<endl;
  }  
}

void pattern_5b(int n)  // ! Number Pattern-5(b)
{
  int k=1;    
  if(n==0)
    cout<<"";
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<k<<"\t";
      k++;
    }

    cout<<endl;
  }  
}

void pattern_6(int n)
{
  int i,a=0,b=1;    
  if(n==0)
    cout<<" ";
  for(i=1;i<=n;i++)
  { 
    for(int j=1;j<=i;j++)
    {
      cout<<a<<" ";
      int sum = a + b;
      a=b;
      b=sum;
    }

    cout<<endl;
  }
}

void pattern_7(int n)
{
  // ? Important Point: "i" works as Row and "j" works as Column.
  if(n==0)
    cout<<" ";
  for(int i=0;i<n;i++)
  { 
    int value=1;  // ! This is becouse nC0 is 1, Value here means rowCcol (iCj0 and since this is 0th column.
    for(int j=0;j<=i;j++)
    {
      cout<<value<<" ";
      int new_iCj1 = (value * (i - j)) / (j + 1);
      value = new_iCj1;  
    }

    cout<<endl;
  }
}

void pattern_8(int n)
{
  int i;  
  int nst=1;
  int nsp=n-1;
  for(i=1;i<=n;i++)
  {
    int value=i;
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
    nsp--;
    nst+=2;   
  }
}

void pattern_9(int n)
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

void pattern_10(int n)
{
  
}


int main(int args,char** argv)
{
  int num;
  cout<<endl<<"Enter the number of pattern: ";
  cin>>num;
  //pattern_1(num); 
  //diamond_1(num);      // ! Pattern-2(a)
  //diamond_2(num);      // ! Pattern-2(b)
  //diamond_3(num);      // ! Pattern-2(c)
  //pattern_3(num);
  //pattern_4(num);
  //pattern_5a(num);  // ! Number Pattern-5(a)
  //pattern_5b(num);  // ! Number Pattern-5(b)
  //pattern_6(num);
  //pattern_7(num);
  //pattern_8(num);
  //pattern_9(num);
  //pattern_10(num);
  return 0;
}

/* Output-1: Half Pyramid Shape
   *
   * *
   * * *
   * * * *
   * * * * *
*/  

/* Output-2(a): Mega Diamond Shape
      *
     * *
    * * *   
   * * * *
  * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/

/* Output-2(b): Diamond Shape
      *
     ***   
    *****
     ***
      *
*/

/* Output-2(c): Diamond Shape
      *
    * * *   
  * * * * *
    * * *
      *
*/

/* Output-3:  
   *** *** 
   **   **
   *     *
   **   **
   *** ***
*/  

/* Output-4: Cross Shape
   *   *
    * * 
     *
    * *
   *   *
*/    

/* Output-5(a): Half Pyamid Shape
   1
   2  5    
   3  6  8
   4  7  9  10
*/  

/* Output-5(b): Number Increasing Half Pyamid 
   1
   2  3    
   4  5  6
   7  8  9  10
*/

/* Output-6: Fibonacci Pattern
   0
   1  1    
   2  3  5
   8  13 21 34
*/

/* Output-7: Binomial Pattern (Pascal Triangle concept) {Remember: This works on Combination of nCk=nC(n-k)}
   1                                       // ! {Important Formula: nCk+1 = [nCk*(n-k)]/{k+1}.}
   1 1
   1 2 1
   1 3 3 1
   1 4 6 4 1
   1 5 10 10 5 1
*/

/* Output-8: Number Increasing & Decreasing Pyramid (Use Double Space as space and Single Space for numbers)
          1
       2  3  2
    3  4  5  4  3
 4  5  6  7  6  5  4  
*/

/* Output-9: Number Increasing & Decreasing Diamond
       1
     2 3 2
   3 4 5 4 3
 4 5 6 7 6 5 4
   3 4 5 4 3
     2 3 2
       1 
*/

/* Output-10: (Use Tab as Space)
   1           1
   1 2       2 1
   1 2 3   3 2 1
   1 2 3 4 3 2 1
*/