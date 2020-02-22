// TODO:: Maximum Frequency Character/Highest Occurence of a Character in a string is to be Printed.
//  ! Similar Approach to find Maximum Frequency Value in an Array.
// ? Example:--> {a,a,a,b,b,b,b,c,c,c,c,c,c,} as {c}.

#include<iostream>
#include<string>
using namespace std;

string Sort(string &str)
{
  char ch1,ch2,temp;
  int index_1,index_2;
  for(int i=0;i<str.length();i++)
  {
    for(int j=1;j<((str.length())-i);j++)
    {
      ch1=str[j-1];
      index_1=int(ch1);
      ch2=str[j];
      index_2=int(ch2);

      if(index_1 > index_2)
      {
        temp=str[j-1];
        str[j-1]=str[j];
        str[j]=temp;  
      }
    }
  }

  return str;
}

char MaximumFrequencyCharacter(string str)
{
  Sort(str);
  char result=str[0];
  int index_1,index_2,curr_count=0,max_count=0;
  char ch1,ch2;
  for(int i=1;i<str.length();i++) 
  {
    ch1 = str[i-1];
    ch2 = str[i];
    index_1 = int(ch1);
    index_2 = int(ch2);
    if(index_1 == index_2)
    {
      curr_count++;
    }
    else
    {
      if(curr_count > max_count)
      {
        max_count=curr_count;
        result=ch1;
      }
      curr_count=0;
    }
  }
   
  if (curr_count > max_count)   // ! This Condition tells the Last Element is Most Frequent in String. 
  { 
    max_count = curr_count; 
    result = str[str.length() - 1]; 
  } 
   
  return result; 
}   

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"Maximum Frequency of a Character: "<<MaximumFrequencyCharacter(str); 
  return 0;
}
