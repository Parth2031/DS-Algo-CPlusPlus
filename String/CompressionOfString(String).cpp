// TODO:: Compression of String --> Example: {a,a,b,b,b,c,d,e,e} as {a2b2cde2}.

#include<iostream>
#include<string>
using namespace std;

void CompressionOfString(string str)
{
  char ch1,ch2;

  // ! With ASCII Value ->
  // int index_1,index_2,count=1;
  // for(int i=1;i<=str.length();i++) 
  // {
  //   ch1 = str[i-1];
  //   ch2 = str[i];
  //   index_1 = int(ch1);
  //   index_2 = int(ch2);
    
  //   if(index_1 == index_2)
  //     count++;
  //   else
  //   {
  //     if(count == 1)
  //       cout<<ch1;
  //     else
  //     {
  //       cout<<ch1<<count;
  //       count = 1;
  //     }
  //   }
  // }

  // ! Without ASCII Value ->
  int count = 1;
  for(int i=1; i<=str.length(); i++)
  {
    ch1 = str[i-1];
    ch2 = str[i];
    if(ch1 == ch2)
      count++;
    else
    {
      if(count == 1)
        cout<<ch1;
      else
      {
       cout<<ch1<<count;
       count = 1;
      } 
    }
  }
}   

string CompressionOfStringBetter(string str)
{
  string ans = "";
  for (int i=0; i<str.length(); i++) 
  {
    int count = 1;
    while(i<str.length()-1 && str.at(i)==str.at(i+1)) 
    {
      i++;
      count++;
    }  
    ans += str.at(i);
    if (count > 1) 
      ans += count;
  }
  return ans;
}

int main(int args,char** argv)
{
  string str;
  cout<<endl<<"Enter the string: ";
  cin>>str;                    
  cout<<"String after Compression of String: ";
  CompressionOfString(str);
  // cout<<CompressionOfStringBetter(str);
  cout<<endl;
  return 0;
}
