// TODO:: Finding a number in an array using Recursion.
// ! Input an array and and a number and whether that number is present in the array or not.
// ? Recursion in two ways:- Void Type and Return Type.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

bool FindNumInArr(vector<int> &arr,int vidx,int check_num)
{
  if(vidx==arr.size())
  {
    if(arr[vidx]==check_num)
      return true;

    return false;
  }

  if(arr[vidx]==check_num)
    return true;

  FindNumInArr(arr,vidx+1,check_num);
}

int main(int args,char** argv)
{
  int n,num;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: ";
   input(arr);
   cout<<"Enter the number to be found in array: ";
   cin>>num;
   if(FindNumInArr(arr,0,num)==true)
     cout<<"Number found in Array: "<<"True"<<endl;
   else
     cout<<"Number not found in Array: "<<"False"<<endl;   
  } 
  return 0;
}