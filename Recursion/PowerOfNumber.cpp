#include <iostream>
using namespace std;

int pow(int m,int n)
{
  if(n == 0)
    return 1;
  if(n%2==0)
    return pow(m*m,n/2);
  return pow(m*m,(n-1)/2) * m;  
}

int main(int args, char** argv)
{
  int m,n;
  cout<<endl<<"Enter the number: ";
  cin>>m;
  cout<<"Enter the power: ";
  cin>>n;
  cout<<endl<<"Power of a number: "<<pow(m,n)<<endl;
  return 0;
}