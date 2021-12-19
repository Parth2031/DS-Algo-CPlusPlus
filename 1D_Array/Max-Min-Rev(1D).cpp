// TODO:: There are 3 Questions: Max Value of array(1d), Min Value of array(1d) and Reverse of array(1D).

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

int maxValue(vector<int> &arr)
{
  int max = arr[0];
  for(int i=0; i<arr.size(); i++)
  {
    if(max < arr[i])
      max = arr[i];
  } 
  return max;
}

int minValue(vector<int> &arr)
{
  int min = arr[0];
  for(int i=1; i<arr.size(); i++)
  {
    if(min > arr[i])
      min = arr[i];
  }
  return min;
}

void display(vector<int>& arr)
{
  for(int i:arr)
    cout<<i<<" ";
  cout<<endl;

  // ! Alternative method:

  // for(int i=0;i<arr.size();i++)
    // cout<<arr[i]<<" ";  
}

void swap(vector<int> &arr,int i,int j)
{
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

void ReverseArray1(vector<int> &arr,int start,int end)
{
  while(start < end)
  {
    swap(arr,start,end);
    start++;
    end--;
  }
}

void ReverseArray2(int* arr, int n)
{
  int* res = new int[n];
  for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    res[j] = arr[i];

  cout<<"Reversed 1-D Array: ";
  for(int k=0;k<n;k++)
    cout<<res[k]<<" ";  
  cout<<endl;
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
    cout<<"Enter the array: ";
    input(arr);   
    // cout<<"Maximum value in 1-D array: "<<maxValue(arr)<<endl;
    // cout<<"Minimum value in 1-D array: "<<minValue(arr)<<endl;
    ReverseArray1(arr,0,n-1);
    cout<<"Reversed 1-D Array: ";
    display(arr);    

    // int* arrNonVector = new int[n];
    // cout<<"Enter the Array: ";
    // for(int i=0; i<n; i++)
    //   cin>>arrNonVector[i];
    // ReverseArray2(arrNonVector, n);
  } 
  return 0;
}