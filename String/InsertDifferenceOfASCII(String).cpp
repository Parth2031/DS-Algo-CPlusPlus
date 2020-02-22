// TODO:: Insert Differences of ASCII Value between the characters. 
// ? Example:--> {a,b,d,g} as {a1b2d3g}.

#include<iostream>
#include<string>
using namespace std;

void InsertDifferenceOfASCII(string str)
{
  int index_1,index_2,diff;
  char ch1,ch2;
  for(int j=0,i=j+1;j<str.length() && i<str.length();j++,i++) 
  {
    ch1 = str[j];
    ch2 = str[i];
    index_1 = int(ch1);
    index_2 = int(ch2);
    diff = index_2 - index_1;
    cout<<ch1<<diff;
  }
  cout<<ch2<<endl;
}   

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"After Inserting the Differences of ASCII Value: ";
  InsertDifferenceOfASCII(str);
  return 0;
}
