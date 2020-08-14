// ? There are 2 Questions :-->
// ^ (1) Selection Sort & (2) Bubble Sort using Recursion.
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
  for(int i:arr)
    cout<<i<<" ";
  cout<<endl;
}

void SelectionSort(vector<int> &arr,int i,int j)
{ 
  int temp;
  if(j!=arr.size()) 
  {
    if(arr[i] > arr[j])
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    
      SelectionSort(arr,i,j+1);
    }  

    SelectionSort(arr,i,j+1);

    if(i!=arr.size())  
      SelectionSort(arr,i+1,j+1);
  }
    
  return;
}

void BubbleSort(vector<int> &arr,int i,int j)
{ 
  int temp;
  if(j!=arr.size()) 
  {
    if(arr[j-1] > arr[j])
    {
      temp=arr[j-1];
      arr[j-1]=arr[j];
      arr[j]=temp;
    
      BubbleSort(arr,i,j+1);
    }  

    BubbleSort(arr,i,j+1);

    if(i!=arr.size())  
      BubbleSort(arr,i+1,j);
  }
    
  return;
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
  //  SelectionSort(arr,0,1);
  //  cout<<"Selection Sorted Array: ";
  //  display(arr);
   BubbleSort(arr,0,1);
   cout<<"Bubble Sorted Array: ";
   display(arr);
  } 
  return 0;
}