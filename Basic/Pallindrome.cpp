#include<iostream>
using namespace std;

bool pallindrome(int num)
{
  int digit,rev=0, n=num;

  do
  {
    digit = num%10;
    rev = (rev*10) + digit;
    num = num/10;
  } while(num!=0); 

  if(n==rev)
    return true;
  else
    return false;
}

int main()
{
  int num;
  cout<<"Enter a Number: ";
  cin>>num;
  cout<<"Number is Pallindrome or not: "<<(boolalpha)<<pallindrome(num);
  return 0;
}