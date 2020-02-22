// TODO:: String Defined Functions ---->> 
// * In order to Input a String--> we use "getline(cin,string defined variable)" with string header file.
// * Alternaive: cin>>str; for getline() and intial defined Syntax:- string str="---".
// ! Main Functions:
// ? .at(i) :- This Function is used to check every character of a string. Syntax :--> string defined variable.charAt(i) in a "i" loop. 
// ? .substr(starting index,length of string) :- This function is used to check a string from starting index to ending index.
// * Syntax :--> string defined variable.substr(0); 
// ? .length() :- This Function will be used as loop iterator.

// TODO:: Important point:- In String, .at() is an alternative of of s[].

// // ! Input Functions:
// // * .push_back() :- This function is used to input a character at the end of the string. Syntax--> str.push_back('s').
// // ? .pop_back() :- This function is used to delete the last character from the string. Syntax--> str.pop_back('s').

// // ! "putchar()" is used to print characters so using loop we can print a string.

#include<iostream>
#include<string>
using namespace std;

void display(string str)
{
  cout<<str.substr(0);
   // ! Alternative: To print a string:
      // for(int i=0;i<str.length();i++)
       //  str.at(i); 
      // * str[i] 
}

int main(int args,char** argv)
{
  string str;
  cout<<"Enter the string: "; 
  getline(cin,str);
  display(str);
  return 0;
}
