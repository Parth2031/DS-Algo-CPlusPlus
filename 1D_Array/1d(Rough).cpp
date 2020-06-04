// ! Kadanes Algorithm is Remaining
// ! Intersection still problem with :- (0 1 2 3 4) & (2 3 4 5)
// ! Sum of two arrays (0 0 0 + 0 0 0) = (0 0 3) showing
// ! Target Sum and Target Sum Triplet (Not able to do)

// ! Remaining Programs to be done :->>

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

