// TODO:: In Inverse, we swap the index with value of array. 
// ! Like:--> arr{3,4,2,0,1} swapped with its index{0,1,2,3,4} gets Inverse Array which is same as Original Array {3,4,2,0,1}. So, It is Mrirror Inverse Array.
// ? Whereas, arr{1,2,3,0} swapped with its index gets {3,0,1,2} which is not Mirror Inverse Array since not equal to Original Array after Inversing Array.

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

bool isMirrorInverse(vector<int> &inverse) 
{ 
	for (int i = 0; i < inverse.size(); i++) 
	{ 
		// ! If condition fails for any element 
		if (inverse[inverse[i]] != i) 
			return false; 
	} 
	// ! Given array is Mirror-Inverse 
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
   InverseArray(arr,inverse);
   cout<<"Inversed Array: "<<endl;
   display(inverse);
   if(isMirrorInverse(inverse)==true)
    cout<<"True";
   else
    cout<<"False";
   } 
  return 0;
}
