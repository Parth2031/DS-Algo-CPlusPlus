// TODO:: Rotating by 90 Degree means Transposing a Matrix and then Reversing the Matrix.
// ? Example - 11 12 13 14 21 22 23 24 31 32 33 34 41 42 43 44
// * Result -  41 42 43 44 31 32 33 34 21 22 23 24 11 12 13 14
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

void display(vector<vector<int>> &ans)
{
  for(int i = 0; i < ans.size(); i++)
  {
    for(int j = 0; j < ans[0].size(); j++)
      cout<<ans[i][j]<<" ";
    cout<<endl;  
  }
}

void RotateBy90Degree(vector<vector<int>> &arr, int n, int m)
{
  // ! Transpose of Matrix :
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < i; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for (int i = 0; i < arr.size(); i++) 
  {
    int start = 0;
    int end = n - 1;
    while (start <= end) 
    {
      int temp = arr[i][start];
      arr[i][start] = arr[i][end];
      arr[i][end] = temp;

      start++;
      end--;
    }
  }
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
    cout<<"Matrix after Rotating by 90 Degree: "<<endl;  
    RotateBy90Degree(arr,r,c);
    display(arr);
    cout<<endl;
  }
  return 0;
}