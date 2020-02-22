// TODO:: In SpiralPrint, We Print the Matrix in Clock Wise and Anti-Clockwise Wise format like 1D Array.
// * Example: {1,2,3,4,5,6,7,8,9} in Clockwise Wise: {1,2,3,6,9,8,7,4,5} and Anti-Clockwise Wise: {1,4,7,8,9,6,3,2,5}.
// ? rmin-> Minimum Row position, cmin-> Minimum Column position
// ? rmax-> Maximum Row position, cmax-> Maximum Column position
// ? counter are used as the no. of elements till used in matrix.

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

void SpiralPrint_Clock(vector<vector<int>> arr)
{
  int rmin=0;
  int cmin=0;
  int rmax=arr.size()-1;
  int cmax=arr[0].size()-1;
  int counter=0;
  int TotalNumOfElements=(arr.size())*(arr[0].size());  

  while(counter<TotalNumOfElements)
  {
    // ! Top Wall:
    for(int col = cmin;col <= cmax;col++)
    {
      cout<<arr[rmin][col]<<" ";
      counter++;
    }
    rmin++;

    // ! Right Wall:
    for(int row = rmin;row <= rmax;row++)
    {
      cout<<arr[row][cmax]<<" ";
      counter++;
    } 
    cmax--;

    // ! Buttom Wall:
    for(int col = cmax;col >= cmin;col--)
    {
      cout<<arr[rmax][col]<<" ";
      counter++;
    }
    rmax--;

    // ! Left Wall:
    for(int row = rmax;row >= rmin;row--)
    {
      cout<<arr[row][cmin]<<" ";
      counter++;
    }
    cmin++;
  }  
  cout<<endl;
}

void SpiralPrint_AntiClock(vector<vector<int>> arr)
{
  int rmin=0;
  int cmin=0;
  int rmax=arr.size()-1;
  int cmax=arr[0].size()-1;
  int counter=0;
  int TotalNumOfElements=(arr.size())*(arr[0].size());  

  while(counter<TotalNumOfElements)
  {
    // ! Left Wall:
    for(int row = rmin;row <= rmax;row++)
    {
      cout<<arr[row][cmin]<<" ";
      counter++;
    }
    cmin++;

    // ! Buttom Wall:
    for(int col = cmin;col <= cmax;col++)
    {
      cout<<arr[rmax][col]<<" ";
      counter++;
    } 
    rmax--;

    // ! Right Wall:
    for(int row = rmax;row >= rmin;row--)
    {
      cout<<arr[row][cmax]<<" ";
      counter++;
    }
    cmax--;

    // ! Top Wall:
    for(int col = cmax;col >= cmin;col--)
    {
      cout<<arr[rmin][col]<<" ";
      counter++;
    }
    rmin++;
  }
  cout<<endl;
}

int main(int args,char** argv)
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
    // cout<<"Spiral Print in Clock Wise: ";
    // SpiralPrint_Clock(arr);
    cout<<"Spiral Print in Anti-Clockwise Wise: ";
    SpiralPrint_AntiClock(arr);
  }
  return 0;
}