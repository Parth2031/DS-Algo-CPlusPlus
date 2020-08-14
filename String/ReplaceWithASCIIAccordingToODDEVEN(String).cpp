// ^ In Order to get a ASCII Value of a character as an Integer value, we use int index = int(ch).
// & In Order to get a Character from Integer ASCII Value, we use char ch = char(index).

// ! Replace Even Index with its higher ASCII value code character and vice versa for Odd Index with its lower ASCII value character.
// ? Example: {a,b,c,d} as {b,a,d,c} as per the Index Position and Another Example: {. , / ' ;} as {/ + 0 & <}.

#include<iostream>
#include<string>
using namespace std;

void ReplaceCharAsPerOddEvenIndex(string str)
{
  int index;
  char ch;
  for(int j=0;j<str.length();j++) 
  {
    ch = str[j];
    index = int(ch);   // ! Getting the ASCII Value of characters. 
    if(j % 2 == 0)
      cout<<char(index+1);   // ! Getting the characters using the ASCII Value.
    else
      cout<<char(index-1);
  }
  cout<<endl;
}


int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                          
  cout<<"New String with Replaced Characters: ";
  ReplaceCharAsPerOddEvenIndex(str);
  return 0;
}