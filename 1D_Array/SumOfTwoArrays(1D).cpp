// TODO:: In this question, Sum of Two Array means Sum using Carry Method.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr1,vector<int> &arr2)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr1[i];

  for(int i=0;i<arr2.size();i++)
    cin>>arr2[i];    
}

void display(vector<int>& TotalSum)
{
  for(int i:TotalSum)
    cout<<i<<" ";
  cout<<endl;
}

void SumofTwoArrays(vector<int> &arr1,vector<int> &arr2,int n,int m)
{
  int k,sum=0,carry=0,check;
  vector<int> TotalSum(k,0);
  k=arr1.size();
  if(arr1.size()==arr2.size())
  {
    for(int i=arr1.size();i>=0;i--)
    {
      check=arr1[i]+arr2[i];
      sum=check % 10;
      TotalSum[k]=sum+carry;
      carry=check / 10;
      k--;
    } 
  }
  else if(arr1.size() > arr2.size())
  {
    arr2[m]=0;
    for(int i=arr1.size();i>=0;i--)
    {
      if(i==arr1.size())
        arr2[i]=0;
       
      check=arr1[i]+arr2[i];
      sum=check % 10;
      TotalSum[k]=sum+carry;
      carry=check / 10;
      k--;
    } 
  }
  else
  {
    k=arr2.size();
    arr1[n]=0;
    for(int i=arr2.size();i>=0;i--)
    {
      if(i==arr2.size())
        arr1[i]=0;
       
      check=arr1[i]+arr2[i];
      sum=check % 10;
      TotalSum[k]=sum+carry;
      carry=check / 10;
      k--;
    }  
  }
  display(TotalSum);  
}

int main(int args,char** argv)
{
  int n,m;
  cout<<endl<<"Enter the size of 1st array: ";
  cin>>n;
  cout<<endl<<"Enter the size of 2nd array: ";
  cin>>m;
  if(n<0 || m<0)
    exit(0);
  else
  {  
   vector<int> arr1(n,0),arr2(m,0);
   cout<<"Enter the 2 Array's: "<<endl;
   input(arr1,arr2);
   SumofTwoArrays(arr1,arr2,n,m); 
  }
  return 0;
}
