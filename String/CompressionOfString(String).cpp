// TODO:: Compression of String --> Example: {a,a,b,b,b,c,d,e,e} as {a2b2cde2}.

#include<iostream>
#include<string>
using namespace std;

void CompOfString(string str)
{
  int index_1,index_2,count=0;
  char ch1,ch2;
  for(int i=1;i<=str.length();i++) 
  {
    ch1 = str[i-1];
    ch2 = str[i];
    index_1 = int(ch1);
    index_2 = int(ch2);
    
    if(index_1 == index_2)
      count++;
    else
    {
      if(count == 0)
        cout<<ch1;
      else
        cout<<ch1<<count+1;
      
      count=0;
    }
  }
  cout<<endl;
}   

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"String after Compression of String: ";
  CompOfString(str);
  return 0;
}
