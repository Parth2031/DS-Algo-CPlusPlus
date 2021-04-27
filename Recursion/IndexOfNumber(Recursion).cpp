// ? There are 3 Questions :-->
// TODO:: (1) Index of Number, (2) Last Index of Number & (3) All Index of Number using Recursion.
// * Example:--> (2) Input:{2,8,6,4,8,6,4,9,0}, m:{8} & Output:{4}.
// * Example:--> (3) Input:{2,8,6,4,8,6,4,9,0}, m:{8}, input check it is array or not:{1} (?) & Output:{1, 4}.  
// ! Recursion in two ways:- Void Type and Return Type.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  cout<<"Enter the Array: ";
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];
}

void display(vector<int> arr)
{
  cout<<"All Index of Numbers Matched Data: ";
  for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<"\t";
  cout<<endl;  
}

int IndexOfNum(vector<int> &arr,int vidx,int check_num)
{
  if(vidx==arr.size())
  {
    if(arr[vidx]==check_num)
      return vidx;

    return -1;
  }

  if(arr[vidx]==check_num)
    return vidx;

  IndexOfNum(arr,vidx+1,check_num);
}

int LastIndexOfNum(vector<int> &arr,int vidx,int check_num)
{
  if(vidx==0)
  {
    if(arr[vidx]==check_num)
      return vidx;

    return -1;
  }

  if(arr[vidx]==check_num)
    return vidx;

  LastIndexOfNum(arr,vidx-1,check_num);
}

vector<int> AllIndexOfNumber(vector<int> arr,int vidx, int data, int size)
{
  if(arr.size() == vidx)
  {
    vector<int> baseArray(size, 0);
    return baseArray;
  } 
  
  if(arr[vidx] == data)
    size++;

  vector<int> recAns = AllIndexOfNumber(arr, vidx+1, data, size); 
  
  if(arr[vidx] == data)
    recAns[size - 1] = vidx;

  return recAns;  
}

int main(int args,char** argv)
{
  int n,data;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   cout<<"Enter the number to find it's Index Position: ";
   cin>>data;
   // cout<<"Index on which Element Found from 1st occurance: "<<IndexOfNum(arr,0,data)<<endl;
   // cout<<"Last Index on which Element Found: "<<LastIndexOfNum(arr,n,data)<<endl;  
   vector<int> result = AllIndexOfNumber(arr, 0, data, 0);
   display(result);
  } 
  return 0;
}
