

#include<iostream>
using namespace std;

int main(int args, char** argv)
{
  int n,fact=1;
  cin>>n;
  for(int i=1;i<=n;i++)
    fact=fact*i;
  cout<<fact;  
  return 0;
}