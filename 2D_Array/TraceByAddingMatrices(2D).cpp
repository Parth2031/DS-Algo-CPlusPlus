// TODO:: Trace of Matrices means Addition of Main Diagonals.

#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>> &arr1,vector<vector<int>> &arr2)
{
  for(int row=0;row<arr1.size();row++)
  {
    for(int column=0;column<arr1[0].size();column++)
      cin>>arr1[row][column];
  }
  for(int i=0;i<arr2.size();i++)
  {
    for(int j=0;j<arr2[0].size();j++)
      cin>>arr2[i][j];
  }
}

void displaySum(vector<vector<int>> &ans)
{
  cout<<"Addition of Matrices: "<<endl;  
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<ans[0].size();j++)
      cout<<ans[i][j]<<" ";
    cout<<endl;  
  }
}

void AddingMatrices(vector<vector<int>> &arr1,vector<vector<int>> &arr2,int r,int c)
{
  vector<vector<int>> ans(r,vector<int>(c,0));
  for(int i=0;i<arr1.size();i++)
  {
    for(int j=0;j<arr2[0].size();j++)
      ans[i][j]=arr1[i][j]+arr2[i][j];
  }
  displaySum(ans);
}

int TraceByAddingMatrices(vector<vector<int>> &arr1,vector<vector<int>> &arr2,int r,int c)
{
  int trace=0;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(i==j)
        trace+=arr1[i][j]+arr2[i][j];  
      else
        continue;
    }  
  }
  return trace;
}

int main(int args,char** argv)
{
  int r,c;
  cout<<endl<<"Enter the number of rows and columns of 1st & 2nd Matrix: ";
  cin>>r>>c;
  if(r<0 || c<0)
   exit(0);
  else
  {
    vector<vector<int>> arr1(r,vector<int>(c,0)),arr2(r,vector<int>(c,0));
    cout<<"Enter the 2 Matrix's: "<<endl;
    input(arr1,arr2);
    //AddingMatrices(arr1,arr2,r,c);
    int result = TraceByAddingMatrices(arr1,arr2,r,c);
    cout<<"Trace of Matrices: ";
    cout<<result<<endl;
  }
  return 0;
}