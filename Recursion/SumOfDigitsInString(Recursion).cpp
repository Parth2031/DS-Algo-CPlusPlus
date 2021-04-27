// TODO:: Sum of Digits in a String using Recursion.
// * Example:--> Input string number:{23456789} & So, Output String Sum:{44}.

// ! In this, we converted string into a number first using String Library. 
// ^ Stringstream Library is used to convert a string number into integer number.

#include <iostream>
#include <sstream> 
using namespace std;

// int findSumOfStringContainingAlphanumeric(string str) 
// { 
//   string temp = ""; 
//   int sum = 0; 

//   for (char ch : str) 
//   { 
//     if (isdigit(ch)) 
//       temp += ch; 
  
//     else 
//     { 
//       sum += atoi(temp.c_str()); 
//       temp = ""; 
//     } 
//   }  
  
//   return sum + atoi(temp.c_str()); 
// } 

string ConvertStringWithAlphanumericIntoNumberString(string str)
{
  string temp = "";

  for(char ch: str)
  {
    if(isdigit(ch))
      temp += ch;
    else
      continue;  
  }

  return temp;
}

int ConvertStringIntoNumber(string s)
{
  stringstream num(s); 
  int x = 0; 
  num >> x;
  
  // ! OR
  // int x = atoi(s);                 // ? Used in char arr[n] format

  return x;
}

int SumOfDigits(int n)
{
  if (n == 0)  
    return 0;    
  return (n % 10 + SumOfDigits(n / 10));  
}

int main(int args, char** argv)
{
  string s;
  cout<<endl<<"Enter the string: ";
  cin>>s;
  // cout<<"Sum of Digits in String non-recursively: "<<findSumOfStringContainingAlphanumeric(s)<<endl;
  string str = ConvertStringWithAlphanumericIntoNumberString(s);
  int number = ConvertStringIntoNumber(str);
  cout<<"Sum of Digits in String: "<<SumOfDigits(number)<<endl;
  return 0;
}


