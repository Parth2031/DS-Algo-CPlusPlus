// ^ In this Question, Input character is compared in string and are moved to end of string 
// ? Example => str = {abeedxxxdee} to {abeedeedxxx} where choosen chararcter is {x}.

// * String.indexOf(character/string) in Java => string.find(character/string) in C++ if true = 0 

#include <iostream>
#include <string>
using namespace std;

// void MoveCharactersAtEnd(string s, char ch, int i)
// {   
//   if(i >= s.length())
//     return; 

//   char c = s.at(i);

//   if(ch != c)
//     cout<<c;

//   MoveCharactersAtEnd(s, ch, i+1);

//   if(ch == c)
//     cout<<c;

//   return;   
// } 

string MoveCharacters(string str, char ch)
{
  if(str.length() < 1) 
    return "";

  string recAns = str.substr(1); 

  if(str.find(ch) == 0) 
    return MoveCharacters(recAns, ch) + ch;
  else 
    return str.at(0) + MoveCharacters(recAns, ch);
}

int main(int args, char** argv)
{
  char ch;
  string str;
  cout<<endl<<"Enter a string: ";
  cin>>str;
  cout<<"Enter the character to be moved at End: ";
  cin>>ch;
  int i;
  cout<<"Enter the index position for a character from string: ";
  cin>>i;
  cout<<"Character of String at input index: "<<str.at(i)<<endl;

  // cout<<"Input Character is moved to the End of String: ";
  // MoveCharactersAtEnd(str, ch, 0);
  // cout<<endl;

  string resString = MoveCharacters(str, ch);
  cout<<"Input Character is moved to the End of String: "<<resString<<endl; 
  return 0;
}