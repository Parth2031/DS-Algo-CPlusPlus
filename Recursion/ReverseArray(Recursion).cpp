// TODO:: Reverse of Array & the Index Value from Reversed Array using given Index Position using Recursion.
//  * Example:--> Input array:{2,8,6,4,8,6,4,9,0} and Index Pos:{1} & So, Output array:{0,9,4,6,4,8,4,6,8,2} and Index Val:{9}.
// ! Recursion in two ways:- Void Type and Return Type (Not Done Yet).

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

void display(vector<int> &arr)
{
  cout<<"Reversed Array: "<<endl;
  for(int i:arr)
    cout<<i<<" ";
  cout<<endl;
}

void ReverseArray(vector<int> &arr, int start, int end) 
{
  int temp;
  if(start <= end)                         // ! In this condition can be: if(start < end)  as Equal value will not change only.
  {                                     
    temp        = arr[start];
    arr[start]  = arr[end];
    arr[end]    = temp;
      
    ReverseArray(arr,start+1,end-1);       // ! In this the Recursive Function is been made as a loop by using an if condition.
  }

  return;
}

int IndexValue(vector<int> &arr,int vidx,int check_pos)
{
  if(vidx==check_pos)
    return arr[vidx];  

  IndexValue(arr,vidx+1,check_pos);
}

int main(int args,char** argv)
{
  int n,user;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   cout<<"Enter the Index Position of Reversed Array to Index Value User Want: ";
   cin>>user;
   ReverseArray(arr,0,n-1);
   display(arr);
   cout<<"Index Value: ";  
   cout<<IndexValue(arr,0,user)<<endl;   
  } 
  return 0;
}


