// ^ In this, We are considering that 2nd Number will have higher value than 1st value.

#include <iostream>
using namespace std;

void DifferenceOfTwoArrays(int* arr1, int* arr2, int n, int m)
{
  int* res = new int[m];
  int carry = 0;
  int i = n-1, j = m-1, k = m-1;
  while(k >= 0)
  {
    int diff = 0;
    // ! Note - In this, if arr1 value is not present to subtract then, We take "0" instead, Example - 1000 - 1 so, for arr1 = "0001". 
    int arr1Value = i >= 0 ? arr1[i]:0;    
    
    if(arr2[j] + carry >= arr1Value)
    {
      diff = (arr2[j] + carry) - arr1Value;
      carry = 0; 
    }
    else
    {
      diff = (arr2[j] + carry + 10) - arr1Value;
      carry = -1;
    }

    res[k] = diff;
    i--;
    j--;
    k--;
  }

  cout<<"Difference Of Two Arrays: ";

  // * Removing the Preceeding Zeroes from Result
  int checkForZeroInResult = 0;
  while(checkForZeroInResult < m && res[checkForZeroInResult] == 0)
    checkForZeroInResult++;

  while(checkForZeroInResult < m) 
    cout<<res[checkForZeroInResult++];
}

int main(int args, char** argv)
{
  int n,m;
  cout<<endl<<"Enter the size of 1st array: ";
  cin>>n;
  cout<<"Enter the size of 2nd array: ";
  cin>>m;
  if(n<0 || m<0)
    exit(0);
  else
  {  
    int arr1[n],arr2[m];
     cout<<"Enter the 1st Array: ";
    for(int i=0;i<n;i++)
      cin>>arr1[i];
    cout<<"Enter the 2nd Array: ";  
    for(int j=0;j<m;j++)
      cin>>arr2[j];  
    DifferenceOfTwoArrays(arr1, arr2, n, m);
    cout<<endl;
  }  
  return 0;
}