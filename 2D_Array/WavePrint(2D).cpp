// TODO:: In WavePrint, We Print the Matrix in Row Wise and Column Wise format like 1D Array.
// * Example: {1,2,3,4,5,6,7,8,9} in Row Wise: {1,2,3,6,5,4,7,8,9} and Column Wise: {1,4,7,8,5,2,3,6,9}.

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

void display(vector<int> &ans)
{
  for(int i:ans)
    cout<<i<<" ";
  cout<<endl;
}

vector<int> WavePrint_Row(vector<vector<int>> &arr)
{
  int k=0;  
  vector<int> arr_row((arr.size()*arr[0].size()),0);
  for(int i=0;i<arr.size();i++)
  {
    if((1 & i) == 0)
    { 
      for(int j=0;j<arr[0].size();j++)
      {    
        arr_row[k]=arr[i][j];
        k++;
      }  
    }
    else
    {
      for(int j=arr[0].size()-1;j>=0;j--)
      {  
        arr_row[k]=arr[i][j];
        k++;
      }  
    }  
  }

  return arr_row;
}

vector<int> WavePrint_Column(vector<vector<int>> &arr)
{
  int k=0;  
  vector<int> arr_col((arr.size()*arr[0].size()),0);
  for(int j=0;j<arr[0].size();j++)
  {
    if((1 & j) == 0)
    { 
      for(int i=0;i<arr.size();i++)
      {    
        arr_col[k]=arr[i][j];
        k++;
      }  
    }
    else
    {
      for(int i=arr.size()-1;i>=0;i--)
      {  
        arr_col[k]=arr[i][j];
        k++;
      }  
    }     
  }

  return arr_col;
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
    cout<<"Enter the Matrix: "<<endl;
    input(arr);
    cout<<"Wave Print in Row Wise: ";
    vector<int> ans_row = WavePrint_Row(arr);
    display(ans_row);
    cout<<"Wave Print in Column Wise: ";
    vector<int> ans_col = WavePrint_Column(arr);
    display(ans_col);
  }
  return 0;
}