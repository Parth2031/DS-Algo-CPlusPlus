// TODO:: Toggle Character means convert the LowerCase Characters to UpperCase and vice versa. Example:--> aBcS to AbCs,etc.

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string ToggleCharacters(string &str)
{
  char ch; 
  for(int j=0;j<str.length();j++) 
  { 
    ch = str[j];
    if(islower(ch))
      str[j]=toupper(ch);
    else
      str[j]=tolower(ch);    
  }

  return str;  
}

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"String after toggling characters: "<<ToggleCharacters(str)<<endl;
  return 0;
}
