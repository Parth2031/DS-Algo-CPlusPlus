// ^ In this Question, Checck whether a String is Pallindrome or Not.

// ? Convert a String into a Complete Lower/Upper Case String with Algorithm Library ->
// * transform(str.begin(), str.end(), str.begin(), ::tolower/ ::toupper);

#include <iostream>
#include <algorithm>
using namespace std;

bool PallindromeOfString(string s, int idx1, int idx2)
{
  if(idx1 == idx2)
    return true;

  if(s[idx1] != s[idx2])
    return false; 

  return PallindromeOfString(s, idx1+1, idx2-1); 
}

int main(int args, char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  cout<<"Pallindrome of String or Not: "<<boolalpha<<PallindromeOfString(str, 0, str.length()-1)<<endl;
  return 0;
}