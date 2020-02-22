// TODO:: Bubble Sort in Increasing Order in this, we fix the greatest element at last.
// TODO:: Insertion Sort in Decreasing Order means (Reverse Insertion Sort).
// TODO:: Selection Sort in Increasing Order in this, we fix the smallest element at beginning.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<int> &arr1,vector<int> &arr2,vector<int> &arr3)
{
  for(int i=0;i<arr1.size();i++)
    cin>>arr1[i];
  for(int i=0;i<arr2.size();i++)
    cin>>arr2[i];
  for(int i=0;i<arr3.size();i++)
    cin>>arr3[i];    
}

void display(vector<int>& arr1,vector<int>& arr2,vector<int>& arr3)
{
  cout<<"Bubble Sort: ";  
  for(int i:arr1)
    cout<<i<<" ";
  cout<<endl;
  cout<<"Reverse Insertion Sort: ";
  for(int i:arr2)
    cout<<i<<" ";
  cout<<endl;
  cout<<"Selection Sort: ";
  for(int i:arr3)
    cout<<i<<" ";
  cout<<endl;
}

void BubbleSort(vector<int> &arr1)
{
  for(int i=0;i<arr1.size();i++)
  {
    for(int j=1;j<((arr1.size())-i);j++)
    {
      if(arr1[j-1]>arr1[j])
      {
        int temp=arr1[j-1];
        arr1[j-1]=arr1[j];
        arr1[j]=temp;
      }
      else 
        continue;
    }
  }
}

void InsertionSort(vector<int> &arr2)
{
  int key,i,j;
  for(i = 1;i < arr2.size();i++)
  {
    key = arr2[i];
    j = i-1;
     while(j >= 0 && arr2[j] < key)   // ! For Increasing order of Insertion Sort condition: arr[j] > key.
     {
       arr2[j + 1] = arr2[j];  
       j = j - 1;  
     }  
    arr2[j+1] = key; 
  }
}

void SelectionSort(vector<int> & arr3)
{
  for(int i=0;i<arr3.size();i++)
  {
    for(int j=i+1;j<arr3.size();j++)
    {
      if(arr3[i]>arr3[j])
      {
        int temp=arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
      }
      else
        continue;  
    }  
  }  
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
   vector<int> arr1(n,0),arr2(n,0),arr3(n,0);
   cout<<"Enter the 3 Array's: "<<endl;
   input(arr1,arr2,arr3);
   BubbleSort(arr1);
   InsertionSort(arr2);
   SelectionSort(arr3);
   display(arr1,arr2,arr3);     
   } 
  return 0;
}