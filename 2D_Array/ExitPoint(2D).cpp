// ^ Exit Point of Matrix means that we have a matrix or a 2-D array that has only 1's and 0's as the values inside it.
// ^                     If we encounter a 0 in the matrix we have to keep moving in the direction that we were moving, 
// ^                     otherwise, when we encounter 1, we will take a 90 degree right turn.
// ! Moving in East after encountering ""1" and 90 degree turn gives South 
// ! Moving in South after encountering "1" and 90 degree turn gives West 
// ! Moving in West after encountering "1" and 90 degree turn gives North 
// ! Moving in North after encountering "1" and 90 degree turn gives East 
// ? Considering, directions as East(0), South(1), West(2) and North(3)
// * Default, direction = 0 (East)
// & Example - 0 0 1 0
// &           1 0 0 0                    Result is (1,3)
// &           0 0 0 0
// &           1 0 1 0  
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

void ExitPointOfAMatrix(vector<vector<int>> &arr, int n, int m)
{
  int direction = 0;
  int i = 0;
  int j = 0;

  while(true)
  {
    // * It is keep the values in between 0-3 and get the Same Row for every "0".
    direction = (direction + arr[i][j]) % 4;
    
    if (direction == 0) 
      j++;  // ! Move in the same row (East direction)
    else if (direction == 1) 
      i++;  // ! Move down the column (South direction)
    else if (direction == 2) 
      j--;  // ! Move backwards in the row (West direction)
    else if (direction == 3) 
      i--;  // ! Move up the column (North direction)

    if (i < 0) 
    {
      i++;  // ! Exit point is one Row Head (in 0th row)
      break;
    } 
    else if (j < 0) 
    {
      j++;   // ! Exit point is one Column Ahead (in 0th col)
      break;
    } 
    else if (i == n) 
    {
      i--;  // ! Exit point is one Row Back (in last row)
      break;
    } 
    else if (j == m) 
    {
      j--;  // ! Exit point is one Column Back (in last col)
      break;
    }
  }
  cout<<i<<",";
  cout<<j;
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
    cout<<"Exit Point of a Matrix are: ";
    ExitPointOfAMatrix(arr,r,c);
    cout<<endl;
  }
  return 0;
}