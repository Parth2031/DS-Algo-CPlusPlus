// TODO:: Checking whether an array is pallindrome or not using Recursion.
// ? Recursion in two ways:- Void Type and Return Type.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

bool isPallindome(vector<int> &arr,int start,int end)
{
  if(start==end || start==end-1)
  {
    if(arr[start]!=arr[end])
      return false;

    return true;  
  }  
   
  if(arr[start]!=arr[end])
    return false;

  isPallindome(arr,start+1,end-1);
}

int main(int args,char** argv)
{
  int n;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   if(isPallindome(arr,0,n-1)==true)
     cout<<"Array is Pallindrome: "<<"True"<<endl;
   else
     cout<<"Array is not Pallindrome: "<<"False"<<endl;   
  } 
  return 0;
}
