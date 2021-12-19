// ^ Finding the Index of the Element 

#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

void input(vector<int> &arr)
{
  for(int i=0;i<arr.size();i++)
    cin>>arr[i];  
}

int IndexOnWhichElementFound(vector<int> &arr,int x)
{
  for(int i=0;i<arr.size();i++)
  {
    if(x == arr[i])
      return i; 
  } 
  return -1; 
}

int isNumber(char s)
{
  if (isdigit(s))
    return 1; 
  else   
    return 0; 
}

int main(int args,char** argv)
{
  int n;
  char x;
  cout<<endl<<"Enter the size of array: ";
  cin>>n;
  if(n<0)
    exit(0);
  else
  {  
   vector<int> arr(n,0);
   cout<<"Enter the array: "<<endl;
   input(arr);
   cout<<"Enter the Element to be searched: ";
   cin>>x;
   if(isNumber(x))
     cout<<"Index on which Element Found from 1st occurance: "<<IndexOnWhichElementFound(arr,(x-'0'))<<endl;
   else
     cout<<"Invalid Input";     
   } 
  return 0;
}