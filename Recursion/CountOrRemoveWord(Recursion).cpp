// ^ In this Question, Count or Remove a Word using Recursion.
// ? Example => hihihijjhihi count and remove "hi" from string.
// * hihihjjhihj -> Another Example

#include <iostream>
#include <string>
using namespace std;

int CountWord(string str, string word, int count, int i)
{
  if(i >= str.length())
    return count;

  if(str.at(i-1) == word.at(0) && str.at(i) == word.at(1))
    return CountWord(str, word, count+1, i+1); 
  else
    return CountWord(str, word, count, i+1); 
}

int main(int args, char** argv)
{
  string str, word;
  cout<<endl<<"Enter a string: ";
  cin>>str;
  cout<<"Enter a 2 letter word to be removed or counted: ";
  cin>>word;
  // int i;
  // cout<<"Enter the index position for a character from string: ";
  // cin>>i;
  // cout<<"Character of String at input index: "<<str.at(i)<<endl;  
  cout<<"Counted the number of word present in string: "<<CountWord(str, word, 0, 1)<<endl;

  return 0;
}