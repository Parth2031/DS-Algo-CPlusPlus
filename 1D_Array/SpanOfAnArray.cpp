// ^ Span An Array - Difference Between Maximum value - Minimum Value of an Array

#include <iostream>
using namespace std;

int SpanArray(int arr[], int n)
{
  int max = arr[0];
  int min = arr[0];

  for(int i=1;i<n;i++)
  {
    if(max < arr[i])
      max = arr[i];
    if(min > arr[i])
      min = arr[i];
  }

  int diff = max - min;
  return diff;
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter the size of Array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array: ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Span of an Array: "<<SpanArray(arr, n);  
  return 0;
}