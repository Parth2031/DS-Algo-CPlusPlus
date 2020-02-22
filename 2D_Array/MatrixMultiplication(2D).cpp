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

void display(vector<vector<int>> &ans)
{
  cout<<"Matrix Multiplication: "<<endl;  
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<ans[0].size();j++)
      cout<<ans[i][j]<<" ";
    cout<<endl;  
  }
}

void MatrixMultiplication(vector<vector<int>> &arr1,vector<vector<int>> &arr2,int r,int n)
{
  vector<vector<int>> ans(r,vector<int>(n,0));
  if(arr1.size()==arr2[0].size())
  {
    for(int i=0;i<arr1.size();i++)
    {
      for(int j=0;j<arr2[0].size();j++)
      {
        for(int k=0;k<ans.size();k++)
          ans[i][j]+=(arr1[i][k] * arr2[k][j]);
      }  
    }
  }
  else
  {
    cout<<"Matrix Multiplication not possible";
    return;
  }
  display(ans);
}

int main(int args,char** argv)
{
  int r,c,m,n;
  cout<<endl<<"Enter the number of rows and columns of 1st Matrix: ";
  cin>>r>>c;
  cout<<"Enter the number of rows and columns of 2nd Matrix: ";
  cin>>m>>n;
  if(r<0 || c<0 || m<0 || n<0)
   exit(0);
  else
  {
    vector<vector<int>> arr1(r,vector<int>(c,0)),arr2(m,vector<int>(n,0));
    cout<<"Enter the 2 Matrix's: "<<endl;
    input(arr1,arr2);
    MatrixMultiplication(arr1,arr2,r,n);
  }
  return 0;
}