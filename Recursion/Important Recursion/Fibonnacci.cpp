// ^ Understanding Excessive Recursive Functions and how to solve them ->>
// TODO:: Memorization approach means "-1" approach as in this we block all the previously called function.

#include <iostream>
using namespace std;

int fib(int n, int s)
{
  static int a=0, b=1;

  if(n == 0)
    return s;
  
  a=b;
  b=s;

  // ! Printing "b" gives Fibonacci till N numbers ->
  // cout<<b;
  // cout<<a<<"\t"<<b<<endl;

  return fib(n-1, a+b); 
}

// & Example of Excessive Recursive Function where a Function call is used multiple times again.

int fibonacci(int n)
{
  if(n <= 1)
    return n; 

  return fibonacci(n-2) + fibonacci(n-1); 
}

// ? To solve Excessive Recursive Function, we use Memorization approach -> 
// * We use "-1" approach which means block all the cases that are already used previously in recursion to improve efficiency. 

int F[10];

int fibonacci_bestCase(int n)
{
  if(n<=1)
  {
    F[n] = n;
    return n; 
  }
  else
  {
    if(F[n-2] == -1)
      F[n-2] = fibonacci_bestCase(n-2);
    if(F[n-1] == -1)
      F[n-1] = fibonacci_bestCase(n-1);

    return F[n-2] + F[n-1];    
  }
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter a position number: ";
  cin>>n;
  
  // cout<<"Fibonnacci of a number: "<<fib(n, 0)<<endl;
  // cout<<"Fibonacci of a number by another approach: "<<fibonacci(n)<<endl;
  
  for(int i=0; i<10; i++)
    F[i] = -1;
  cout<<"Fibonacci of a number by memorization approach: "<<fibonacci_bestCase(n)<<endl;
  
  return 0;
}
