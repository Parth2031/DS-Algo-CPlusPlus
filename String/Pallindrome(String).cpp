// TODO:: There are 2 Questions: Check isPallindrome and Print & Count all Pallindromic Substrings.

// & In this, A Pallindrome means if reverse of the string is same as starting string. Example:--> abbcca,abba,etc.
// ? In this, Lowercase Characters are treated same as Uppercase Characters.
// * isPallindrome Question was solved using 2 methods--> String and Character Array.
// ^ Print All Pallindromic SubStrings
// ~ Example - "abcc" as "a", "b", "c", "cc" 
// ! Note - SubStr in C++ has (start, length of string) whereas, In Java, SubString has (start, end index)

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

 // ! Converting LowerCase to UpperCase:
string convertLowerToUpper(string &str)
{
  char ch; 
  for(int j=0;j<str.length();j++) 
  { 
    ch = str[j];
    str[j]=toupper(ch);  
  }

  return str;

  // for(int i=0;i<str.length();i++)  // ! Printing UpperCase string
  //   cout<<str.at(i);  
}

bool isPallindrome(string str)
{
  int start = 0, end = str.length()-1;
  while(start <= end)
  {
    if(str[start] != str[end])
      return false; 
    start++;
    end--;    
  }
  return true; 
}

int CountOfPallindromeSubstringAndPrint(string str)
{ 
  int count = 0;
  cout<<"All the Pallindromic Substrings are: ";
  for(int i=0; i<str.length(); i++)
  {
    for(int j=1; j<=str.length()-i; j++)
    {
      string ss = str.substr(i,j);  
      bool Pallindromic = isPallindrome(ss);
      if(Pallindromic == true)
      {
        count++;
        cout<<ss<<" ";
      }  
      else
        continue;  
    }
  }

  return count;
}    

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                          // ! Alternative: getline(cin,str); 
  // convertLowerToUpper(str);
  cout<<"String is Pallindrome or Not: "<<boolalpha<<isPallindrome(str)<<endl;
  cout<<endl<<"No. of Pallindrome Substrings are: "<<CountOfPallindromeSubstringAndPrint(str)<<endl; 
  return 0;
}


// ? This Part is Solved using Character Array --->>

/*
#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;

vector<char> convertLowerToUpper(vector<char> &str)
{
  int j = 0; 
  char ch; 
  while (str[j]) 
  { 
    ch = str[j];
    str[j]=toupper(ch); 
    // putchar(toupper(ch));   // ? To print string as UpperCase. 
    j++; 
  }

  return str;  
}

bool isPallindrome(vector<char> &upper)
{
  int start=0,end=upper.size()-1;
  while(start<=end)
  {
    if(upper[start]!=upper[end])
      return false; 
    start++;
    end--;    
  }
  return true; 
}

int main(int args,char** argv)
{
  int n;
  cout<<endl<<"Enter the size of string: ";
  cin>>n;  
  vector<char> str(n,0);
  cout<<"Enter the string: ";
  for(int i=0;i<str.size();i++)
    cin>>str[i];
  // ! Converting LowerCase to UpperCase:
  convertLowerToUpper(str);
  if(isPallindrome(str)==true)
    cout<<"String is Pallindrome: "<<"True"<<endl;
  else
    cout<<"String is Pallindrome: "<<"False"<<endl;
  return 0;
}
*/