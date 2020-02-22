// TODO:: Inverse of Array & the Index Value from Inversed Array using given Index Position using Recursion.
// * Example:--> Input array:{1,2,3,0} and Index Pos:{2} & So, Output array:{3,0,1,2} and Index Val:{1}. 
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
  cout<<"Inversed Array: "<<endl;  
  for(int i:arr)
    cout<<i<<" ";
  cout<<endl;
}

void InverseArray(vector<int> arr,vector<int> &inv,int i) 
{    
   int value,temp; 
   if(i!=arr.size())
   {
      value = arr[i];
      inv[value] = i;  

      InverseArray(arr,inv,i+1); 
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
   vector<int> arr(n,0),inv(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   cout<<"Enter the Index Position of Inversed Array to Index Value User Want: ";
   cin>>user;
   InverseArray(arr,inv,0);
   display(inv);
   cout<<"Index Value: ";  
   cout<<IndexValue(inv,0,user)<<endl;   
  } 
  return 0;
}
