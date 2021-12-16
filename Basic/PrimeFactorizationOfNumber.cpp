// ? Condition in Prime Numbers that Pq=n then P>√n, q>√n Not Allowed so, [div^2<=n] 
// ^ Exceptional Case - Number like "46" which have "23" as it's Prime Factor means that Remainder will not be "1" after the process.

#include <iostream>
using namespace std;

void PrimeFactorization(int n)
{
  for(int divisor=2; (divisor*divisor)<=n; divisor++)
  {
    while(n % divisor == 0)
    {
      n = n / divisor;
      cout<<divisor<<" ";
    }
  }
  
  if(n!=1)
    cout<<n;
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter a number: ";
  cin>>n;
  cout<<"Prime Factors of Number are: ";
  PrimeFactorization(n);
  cout<<endl;
  return 0;
}