// ^ In this Question, Check whether String 1 = {abcd} is equal to String 2 = {dcba} 
// ? In this, I have done Recursively and Non-Recursively both ways check.

#include <iostream>
using namespace std;

// bool StringOneTwoReverseNonRecursively(string s1, string s2)
// {
//   if(s1.length() != s2.length())
//     return false;
//   else
//   {
//     for(int i=0, j=s2.length()-1; i<s1.length()-1, j>=0; i++, j--)
//     {
//       if(s1[i] != s2[j])
//       {
//         cout<<s1[i]<<" "<<s2[j]<<endl;
//         return false;
//       }
//     }
//     return true;
//   }
// }

bool StringOneTwoReverse(string s1, string s2, int idx1, int idx2)
{
  if(s1.length() != s2.length())    
    return false;

  if(s1[idx1] != s2[idx2])
    return false;
  
  if(idx2 == 0)
    return true;

  return StringOneTwoReverse(s1, s2, idx1+1, idx2-1);
}

int main(int args, char** argv)
{
  string str1, str2;
  cout<<endl<<"Enter 1st string: ";
  cin>>str1;
  cout<<"Enter 2nd string: ";
  cin>>str2;
  // cout<<"String One Two are Reverse or Not (Non-Recursively): "<<boolalpha<<StringOneTwoReverseNonRecursively(str1, str2)<<endl;
  cout<<"String One Two are Reverse or Not: "<<boolalpha<<StringOneTwoReverse(str1, str2, 0, str2.length()-1)<<endl;
  return 0;
}

