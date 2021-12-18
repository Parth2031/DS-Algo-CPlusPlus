// ^ There are 2 Problems here - Frequency of Digit & Total Occurences of a Number.
// ? Total Occurences of a Number - In this, We check the occurences of the key starting from 1 to number(n) 
// * Example - Number has "21" with key=2 has "2" four times ranging from 1-20. 

#include <iostream>
using namespace std;

int FrequencyOfDigit(int n, int key)
{
  int counter = 0;
  while(n!=0)
  {
    int digit = n % 10;
    if(digit == key)
      counter++;
    n = n /10;
  }
  return counter;
}

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
  cout<<"Frequency of Digit: "<<FrequencyOfDigit(n, key)<<endl;
  cout<<"Number matching the key: "<<TotalOccuranceOfNumber(n, key)<<endl;
  return 0;
}