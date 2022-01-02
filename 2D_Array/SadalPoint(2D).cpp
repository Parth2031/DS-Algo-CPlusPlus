// TODO:: Saddle Point of Matrix means Index Point with the minimum value in the row and the maximum value in the column.
// ? Example - Matrix : 11 12 13 14 
// ?                    21 22 23 24  
// ?                    31 32 33 34
// ?                    41 42 43 44
// *           Result : 41                     (Possible with No Saddle Point)
// ~ It works on Square Matrix. (r == c)

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

void SaddlePointOfMatrix(vector<vector<int>> &arr, int n, int m)
{
  int columnNum = 0, min = 0;
  for (int i = 0; i < n; i++) 
  { 
    min = arr[i][0];
    for (int j = 0; j < m; j++) 
    { 
      if (min > arr[i][j]) 
      {
        min = arr[i][j];
        columnNum = j;
      }
    }
    
    bool potentialAns = true;
    
    for (int r = 0; r < n; r++) 
    {
      if (min < arr[r][columnNum]) 
      {
        potentialAns = false;
        break;
      }
    }
    
    if (potentialAns == true) 
    {
      cout<<min;
      return;
    }
  }
  cout<<"Invalid Input";
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
    cout<<"Saddle Point of the Matrix: ";  
    SaddlePointOfMatrix(arr,r,c);
    cout<<endl;
  }
  return 0;
}