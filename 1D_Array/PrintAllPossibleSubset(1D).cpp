//  TODO:: This Question is solved using (Bit Manipulation) where the element is printed when it's "bit is ON" so we will use "i" as Bit Counter.
// ? Remember: In Question of allPossibleSubset, it's output are "2^n number" where n-->size of array.
// * Example: 7,2,9 -->  [],[7 ],[2 ],[7 2 ],[7 9 ],[2 9 ],[7 2 9 ].

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];
}

void PrintAllPossibleSubset(vector<int> &arr,int n)
{
  int count=pow(2,n);
  for(int i=0;i<count;i++)
  {
    cout<<"[";
    for(int j=0;j<arr.size();j++)
    {
      // ! This if condition will check if jth bit in binary representation of  i  is set or not.
			// * If the value of (i & (1 << j)) is greater than 0 , include arr[j] in the current subset, otherwise exclude arr[j].
      // ? In this i and j values are treated as binary numbers like 000,001,010,etc.
      
      if((i & (1<<j)) > 0)
        cout<<arr[j]<<" ";
    }
    cout<<"]"<<endl;
  }  
}

int main(int args,char** argv)
{
  int n;
  cout<<endl<<"Enter the size of the array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   PrintAllPossibleSubset(arr,n);
  }
  return 0;
}
