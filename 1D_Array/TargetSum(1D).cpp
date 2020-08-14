// TODO:: Done 2 Questions here :->
// ? In this Question, We take an input array from user and makes a pair of 2 number to get a target sum which was input by user.
// * In this Question, We take an input array from user and makes a pair of 3 number to get a target sum which was input by user.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}


void display(vector<int>& arr)
{
  // for(int i:arr)
  //   cout<<i<<" ";
  // cout<<endl;
}

void Sort(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
  {
    for(int j=1;j<((arr.size())-i);j++)
    {
      if(arr[j-1]>arr[j])
      {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
      }
      else 
        continue;
    }
  }
}

void TargetSum(vector<int> &arr, int target)
{
  int key,sum;
  if(arr.size()&1==0)
  {
   for(int i=0;i<(arr.size())/2;i++)
   {
     key=arr[i];
     for(int j=0;j<arr.size();j++)
     {
       if(j==i)
         continue;
       else
       {
         sum=key+arr[j]; 
         if(sum==target)
         {
           cout<<key<<" "<<arr[j]<<" "<<endl;
         }
       }
     }
   }
  } 
  else
  {
    for(int i=0;i<arr.size();i++)
    {
      key=arr[i];
      for(int j=0;j<((arr.size())/2)+1;j++)
      {
        if(j==i)
          continue;
        else
        {
          sum=key+arr[j]; 
          if(sum==target)
          {
            cout<<key<<" "<<arr[j]<<" "<<endl;
          }
        }
      }
   }
  }
}

void TargetSumTriplet(vector<int> &arr,int target)
{

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
   int target;
   cout<<"Enter the array: "<<endl;
   input(arr);
   cout<<"Enter the Target Sum: ";
   cin>>target;
   Sort(arr);
   TargetSum(arr,target);
   //TargetSumTriplet(arr,target);
   display(arr);
   } 
  return 0;
}
