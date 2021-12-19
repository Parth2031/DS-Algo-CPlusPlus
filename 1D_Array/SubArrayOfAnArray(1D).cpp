// ^ Breaking the Array into its Sub Array
// ? Example - Array {1,2,3} has Sub Array - {1},{1,2},{1,2,3},{2},{2,3},{3}  

#include <iostream>
using namespace std;

void SubArray(int* arr, int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n; j++)
    {
      for(int k=i; k<=j; k++)
        cout<<arr[k]<<" ";
      cout<<endl;
    }
  }
}

int main(int args, char** argv)
{
  int n;
  cout<<endl<<"Enter the size of an Array: ";
  cin>>n;
  int* arr = new int[n];
  cout<<"Enter the Array: ";
  for(int i=0; i<n; i++)
    cin>>arr[i];
  cout<<"Sub Array of an Array: "<<endl;
  SubArray(arr, n);  
  cout<<endl;
  return 0;
}