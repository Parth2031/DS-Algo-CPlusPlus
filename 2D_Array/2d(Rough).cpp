// ! 3 Questions remaining:-----> 
// ? Spiral Print :-> 1 Incorrect case : Matrix of 4x3 in Anti-Clockwise is giving wrong output (?????) 
// Exit Point
// Sadal Point









// ! Spiral Print (4x3 matrix issue)

// #include<iostream>
// #include<vector>
// using namespace std;

// void input(vector<vector<int>> &arr)
// {
//   cout<<"Input: ";
//   for(int i=0;i<arr.size();i++)
//   {
//     for(int j=0;j<arr[0].size();j++)
//       cin>>arr[i][j];
//   }
// }

// // void display(vector<int> &ans)
// // {
// //   cout<<"Ans: ";
// //   for(int i:ans)
// //     cout<<i<<" ";
// //   cout<<endl;
// // }

// void SPrint_AntiClk(vector<vector<int>> &arr)
// {
//   int rmin=0;
//   int cmin=0;
//   int rmax=arr.size()-1;
//   int cmax=arr[0].size()-1;
//   int counter=0;
//   int TotalNumOfElements=(arr.size())*(arr[0].size());  
//   vector<int> arr_col((arr.size()*arr[0].size()),0);
 
//   cout<<"Toatal: "<<TotalNumOfElements;
//   cout<<endl<<"C"<<counter<<endl;

//   while(counter<TotalNumOfElements)
//   {
//     // cout<<"f";
//     // ! Left Wall:
//     for(int row = rmin;row <= rmax;row++)
//     {
//       arr_col[counter] = arr[row][cmin];
//       // cout<<arr[row][cmin]<<" ";
//       cout<<arr_col[counter]<<" ";
//       counter++;
//     }
//     // cout<<endl<<"Counter: "<<counter;
//     cmin++;

//     // ! Buttom Wall:
//     for(int col = cmin;col <= cmax;col++)
//     {
//       arr_col[counter] = arr[rmax][col];
//       // cout<<arr[rmax][col]<<" ";
//       cout<<arr_col[counter]<<" ";
//       counter++;
//     } 
//     // cout<<endl<<"Counter: "<<counter;
//     rmax--;

//     // ! Right Wall:
//     for(int row = rmax;row >= rmin;row--)
//     {
//       arr_col[counter] = arr[row][cmax];
//       // cout<<arr[row][cmax]<<" ";
//       cout<<arr_col[counter]<<" ";
//       counter++;
//     }
//     // cout<<endl<<"Counter: "<<counter;
//     cmax--;

//     // ! Top Wall:
//     for(int col = cmax;col >= cmin;col--)
//     {
//       arr_col[counter] = arr[rmin][col];
//       // cout<<arr[rmin][col]<<" ";
//       cout<<arr_col[counter]<<" ";
//       counter++;
//     }
//     // cout<<endl<<"Counter: "<<counter;
//     rmin++;
//   }

//    cout<<endl<<"C"<<counter;
//   // display(arr_col);
// }

// int main(int args,char** argv)
// {
//   int r,c;
//   cout<<"Enter Row and Col: ";
//   cin>>r>>c;
//   if(r<0 || c<0)
//    exit(0);
//   else
//   {
//     vector<vector<int>> arr(r,vector<int>(c,0));
//     input(arr);
//     SPrint_AntiClk(arr);
//   }
//   return 0;
// }