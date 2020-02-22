// TODO:: Checking whether an array is sorted or not using Recursion.
// ? Recursion in two ways:- Void Type and Return Type.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

bool CheckSorted(vector<int> &arr,int vidx)
{
  if(vidx==arr.size()-1)
  {
    if(arr[vidx-1]>arr[vidx])
      return false;

    // if(arr[vidx-1]>arr[vidx])        // ! For Void Type <--
    // {  
    //   cout<<"false";
    //   return;
    // } 

    return true;
   
    // cout<<"true";                    // ! For Void Type <--
    // return;
  }

  if(arr[vidx]>arr[vidx+1])
    return false;

  // if(arr[vidx]>arr[vidx+1])           // ! For Void Type <--
  // {
  //   cout<<"false";
  //   return;
  // }  

  CheckSorted(arr,vidx+1);
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
   if(CheckSorted(arr,0)==true)
     cout<<"Array is Sorted: "<<"True"<<endl;
   else
     cout<<"Array is not Sorted: "<<"False"<<endl;   
  } 
  return 0;
}