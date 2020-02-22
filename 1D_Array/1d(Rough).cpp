// ! Kadanes Algorithm is Remaining
// ! IndexElement (1 case problem)
// ! Intersection (When '0' value occurs problem)
// ! Target Sum and Target Sum Triplet (Not able to do)
// ! Sum of Two arrays



// ! Sum of two arrays:->
// * In n==m, even case is problem
// * In n>m, (7,5) and (4,3) where if n & m is odd and n is even & m is odd cases are problem.
// * in n<m, (4,5) giving 4 output instead of 5

// #include<iostream>
// #include<vector>
// using namespace std;

// void input(vector<int> &arr1,vector<int> &arr2)
// {
//   for(int i=0;i<arr1.size();i++)
//     cin>>arr1[i];

//   for(int i=0;i<arr2.size();i++)
//     cin>>arr2[i];    
// }

// void display(vector<int>& TotalSum)
// {
//   cout<<"Sum of two arrays: ";
//   for(int i:TotalSum)
//     cout<<i<<" ";
//   cout<<endl;
// }

// void SumofTwoArrays(vector<int> &arr1,vector<int> &arr2,int n,int m)
// {
//   int k,sum=0,carry=0,check;
//   vector<int> TotalSum(k,0);
//   k=arr1.size();
//   if(arr1.size()==arr2.size())
//   {
//     for(int i=arr1.size();i>=0;i--)
//     {
//       check=arr1[i]+arr2[i];
//       sum=check % 10;
//       TotalSum[k]=sum+carry;
//       carry=check / 10;
//       k--;
//     } 
//   }
//   else if(arr1.size() > arr2.size())
//   {
//     arr2[m]=0;
//     for(int i=arr1.size();i>=0;i--)
//     {
//       if(i==arr1.size())
//         arr2[i]=0;
       
//       check=arr1[i]+arr2[i];
//       sum=check % 10;
//       TotalSum[k]=sum+carry;
//       carry=check / 10;
//       k--;
//     } 
//   }
//   else
//   {
//     k=arr2.size();
//     arr1[n]=0;
//     for(int i=arr2.size();i>=0;i--)
//     {
//       if(i==arr2.size())
//         arr1[i]=0;
       
//       check=arr1[i]+arr2[i];
//       sum=check % 10;
//       TotalSum[k]=sum+carry;
//       carry=check / 10;
//       k--;
//     }  
//   }
//   display(TotalSum);  
// }

// int main(int args,char** argv)
// {
//   int n,m;
//   cout<<endl<<"Enter the size of 1st array: ";
//   cin>>n;
//   cout<<"Enter the size of 2nd array: ";
//   cin>>m;
//   if(n<0 || m<0)
//     exit(0);
//   else
//   {  
//    vector<int> arr1(n,0),arr2(m,0);
//    cout<<"Enter the 2 Array's: "<<endl;
//    input(arr1,arr2);
//    SumofTwoArrays(arr1,arr2,n,m);
//   }  
//   return 0;
// }


// ! Target Sum -->

// #include<iostream>
// #include<vector>
// using namespace std;

// void input(vector<int> &arr)
// {
//   for(int i=0;i<arr.size();i++)
//     cin>>arr[i];  
// }


// void display(vector<int>& arr)
// {
//   // for(int i:arr)
//   //   cout<<i<<" ";
//   // cout<<endl;
// }

// void Sort(vector<int> &arr)
// {
//   for(int i=0;i<arr.size();i++)
//   {
//     for(int j=1;j<((arr.size())-i);j++)
//     {
//       if(arr[j-1]>arr[j])
//       {
//         int temp=arr[j-1];
//         arr[j-1]=arr[j];
//         arr[j]=temp;
//       }
//       else 
//         continue;
//     }
//   }
// }

// void TargetSum(vector<int> &arr, int target)
// {
//   int key,sum;
//   if(arr.size()&1==0)
//   {
//    for(int i=0;i<(arr.size())/2;i++)
//    {
//      key=arr[i];
//      for(int j=0;j<arr.size();j++)
//      {
//        if(j==i)
//          continue;
//        else
//        {
//          sum=key+arr[j]; 
//          if(sum==target)
//          {
//            cout<<key<<" "<<arr[j]<<" "<<endl;
//          }
//        }
//      }
//    }
//   } 
//   else
//   {
//     for(int i=0;i<arr.size();i++)
//     {
//       key=arr[i];
//       for(int j=0;j<((arr.size())/2)+1;j++)
//       {
//         if(j==i)
//           continue;
//         else
//         {
//           sum=key+arr[j]; 
//           if(sum==target)
//           {
//             cout<<key<<" "<<arr[j]<<" "<<endl;
//           }
//         }
//       }
//    }
//   }
// }

// int main(int args,char** argv)
// {
//   int n;
//   cout<<endl<<"Enter the size of array: ";
//   cin>>n;
//   if(n<0)
//     exit(0);
//   else
//   {  
//    vector<int> arr(n,0);
//    int target;
//    cout<<"Enter the array: "<<endl;
//    input(arr);
//    cout<<"Enter the Target Sum to find pair of number as Target: ";
//    cin>>target;
//    Sort(arr);
//    TargetSum(arr,target);
//    display(arr);
//    } 
//   return 0;
// }


// ! Intersection-->
// * When '0' value occurs

// #include<iostream>
// #include<vector>
// using namespace std;

// void input(vector<int> &arr1,vector<int> &arr2)
// {
//   for(int i=0;i<arr1.size();i++)
//     cin>>arr1[i];
//   for(int i=0;i<arr2.size();i++)
//     cin>>arr2[i];
// }

// void display(vector<int> &ans)
// {
//   cout<<"Intersected Array: [";  
//   for(int i:ans)
//   {
//     if(i==0)
//       continue;
//     else   
//       cout<<i;
//     if(i<ans.size())  
//       cout<<",";  
//   }    
//   cout<<"]";
//   cout<<endl;
// }

// void Sort(vector<int> &arr)
// {
//   for(int i=0;i<arr.size();i++)
//   {
//     for(int j=1;j<((arr.size())-i);j++)
//     {
//       if(arr[j-1]>arr[j])
//       {
//         int temp=arr[j-1];
//         arr[j-1]=arr[j];
//         arr[j]=temp;
//       }
//       else 
//         continue;
//     }
//   }
// }

// void Intersection(vector<int> &arr1,vector<int> &arr2)
// {
//   int k;
//   vector<int> ans(k,0);
//   k=0;
//   if(arr1.size()==arr2.size())
//   {
//     int i=0,j=0;
//     while (i<arr1.size()  && j<arr2.size()) 
//     {
//       if(arr1[i]==arr2[j])
//       {
//         ans[k]=arr1[i];
//         k++;
//         i++;
//         j++;
//       }  
//       else if(arr1[i]<arr2[j])
//         i++;
//       else
//         j++;            
//     }
//   }   
//   else
//   {
//     int i=0,j=0;
//     while(i<arr1.size() || j<arr2.size())
//     {
//       if(arr1[i]==arr2[j])
//       {
//         ans[k]=arr1[i];
//         k++;
//         i++;
//         j++;
//       }
//       else if(arr1[i]<arr2[j])
//         i++;
//       else
//         j++;  
//     }  
//   }

//   display(ans);
// }

// int main(int args,char** argv)
// {
//   int n,m;
//   cout<<endl<<"Enter the size of 1st array: ";
//   cin>>n;
//   cout<<"Enter the size of 2nd array: ";
//   cin>>m;
//   if(n<0 || m<0)
//     exit(0);
//   else
//   {  
//    vector<int> arr1(n,0),arr2(m,0);
//    cout<<"Enter the 2 Array's: "<<endl;
//    input(arr1,arr2);
//    Sort(arr1);
//    Sort(arr2);
//    Intersection(arr1,arr2);
//   } 
//   return 0;
// }

