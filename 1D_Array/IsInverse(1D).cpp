// TODO:: In Inverse, we swap the index with value of array. 

// ! Done in 2 ways :-->
// ? Inversed an Array and then Checked whether it is Inverse of that Array or Not.
// ? Input the Array and its Inversed Array and Checked whether they are same or not.

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

vector<int> InverseArray(vector<int> &arr,vector<int> &inverse)
{
  int value;  
  for(int i=0;i<arr.size();i++)
  {
    value = arr[i];
    inverse[value] = i;
  }

  return inverse;
}

bool isInverse(vector<int> arr,vector<int> inverse) 
{ 
  for (int i = 0; i < arr.size(); i++) 
  { 
  	if (inverse[arr[i]] != i) 
  	  return false; 
  }  
  return true; 
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
   vector<int> arr(n,0),inverse(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   //InverseArray(arr,inverse);
   cout<<"Inversed Array: ";
   //display(inverse);
   input(inverse);
   if(isInverse(arr,inverse)==true)
    cout<<"True";
   else
    cout<<"False";
   } 
  return 0;
}