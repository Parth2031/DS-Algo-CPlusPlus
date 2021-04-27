// ^ In this Question, Remove Adjacent Duplicates -> {Peppepcoding} to {Pepepcoding} OR {aabbcc} to {abc}.
// * Duplicates type of Question used String functions such as .at() & .substr().

#include <iostream>
#include <string>
using namespace std;

// ? Remove Adjacent Duplicates in a Character Array ->

// void removeAdjacentDuplicates(char* s) 
// { 
//   if (s[0] == '\0') 
//         return; 
   
//   if (s[0] == s[1]) 
//   {         
//     int i = 0;  
//     while (s[i] != '\0') 
//     { 
//       s[i] = s[i + 1]; 
//       i++; 
//     } 
   
//    RemoveAdjacentDuplicates(s); 
//   } 
  
//   RemoveAdjacentDuplicates(s + 1); 
// }  

string RemoveAdjacentDuplicates(string s)
{
  if(s.length() == 1)
    return s;

  char ch = s.at(0);
  string recAns = RemoveAdjacentDuplicates(s.substr(1));
   
  if(ch == recAns.at(0)) 
    return recAns;
  else  
    return ch + recAns;    
}

int main(int args, char** argv)
{
  // int n;
  // cout<<endl<<"Enter the size of character array: ";
  // cin>>n;
  // char str[n];
  // cout<<"Enter a string: ";
  // for(int i=0; i<n; i++)
  //   cin>>str[i];
  // removeAdjacentDuplicates(str);  
  // cout<<"String without Adjacent Duplicates: "<<str<<endl; 

  string str;
  cout<<endl<<"Enter a string: ";
  cin>>str;
  int i;
  cout<<"Enter the index position for a character from string: ";
  cin>>i;
  cout<<"Character of String at input index: "<<str.at(i)<<endl;
  string resString = RemoveAdjacentDuplicates(str);
  cout<<"String without Adjacent Duplicates: "<<resString<<endl; 
  return 0;
}