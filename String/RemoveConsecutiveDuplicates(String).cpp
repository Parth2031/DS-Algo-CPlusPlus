// TODO:: Remove Single/All Consecutive Duplicate Characters from a String.
// ? Example:--> {a,a,b,b,b,b,c,c,c,c,c,c} as All:{a,b,c} and Single{a,b,b,c,c,c}.

#include<iostream>
#include<string>
using namespace std;

void RemoveConseqDupli(string str)
{
  int index_1,index_2,count=0;
  char ch1,ch2;
  for(int i=1;i<=str.length();i++) 
  {
    ch1 = str[i-1];
    ch2 = str[i];
    index_1 = int(ch1);
    index_2 = int(ch2);
    
    if(index_1 != index_2)          // ! Removing All Consecutive Duplicates -->
    {
      cout<<ch1;
    }  

    // if(index_1 == index_2)       // ! Removing Single Consecutive Duplicates -->>
    // {
      // count++;          
      // if(count == 1)
      // {
        // cout<<ch1;   
        // count=0;
        // i++;               
      // }
    // }
    // else
    //   cout<<ch1;
    
  }  
  cout<<endl;
}   

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"String after Removing Consecutive Duplicates Characters: ";
  RemoveConseqDupli(str);
  return 0;
}
