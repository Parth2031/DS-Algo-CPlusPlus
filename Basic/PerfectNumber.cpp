#include <iostream> 
using namespace std; 

int checkPerfectNumber(int n)
{
  int i=1,sum=0;
  while(i<n)
  {
    int temp = n % i;
    if(temp == 0)
      sum+=i;
    i++;
  }
  return sum;
}

int main(int args, char** argv)
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<"Checking it is Perfect Number or not: ";
  int res = checkPerfectNumber(n);
  if(res == n)
    cout<<"Perfect number"<<endl;
  else
    cout<<"Not a Perfect Number";  
  return 0;
}

