// TODO:: Rotating by 90 Degree means

// ~ 

#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>> &arr)
{
  for(int i=0;i<arr.size();i++)
  {
    for(int j=0;j<arr[0].size();j++)
      cin>>arr[i][j];
  }
}

void RotateBy90Degree(vector<vector<int>> &arr, int n, int m)
{
  
}

int main(int args, char** argv)
{
  int r,c;
  cout<<endl<<"Enter the number of rows and columns of the Matrix: ";
  cin>>r>>c;
  if(r<0 || c<0)
   exit(0);
  else
  {
    vector<vector<int>> arr(r,vector<int>(c,0));
    cout<<"Enter the Matrix: ";
    input(arr);
    cout<<"Matrix after Rotating by 90 Degree: ";  
    RotateBy90Degree(arr,r,c);
    cout<<endl;
  }
  return 0;
}