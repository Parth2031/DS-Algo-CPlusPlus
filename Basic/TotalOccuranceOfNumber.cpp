#include <iostream>
using namespace std;

int TotalOccuranceOfNumber(int n, int key)
{
  int count = 0;
  int i = key;

  while(i <= n)
  {
    if(i%10 == key)
      count++;
    if (i != 0 && i/10 == key) 
    { 
      count++; 
      i++; 
    } 
    else if (i/10 == key-1) 
      i = i + (10 - key); 
    else
      i = i + 10;   
  }

  return count;
}

int main(int args, char** argv)
{
  int n, key;
  cout<<endl<<"Enter the number where it is checked: ";
  cin>>n;
  cout<<"Enter the number to be checked: ";
  cin>>key;
  cout<<"Number matching the key: "<<TotalOccuranceOfNumber(n, key)<<endl;
  return 0;
}