// ! Bit Masking Questions ????


// ! Incorrect answer 

// #include<iostream>
// using namespace std;

// int LengthOfIntegerNumber(int n)
// {
//   int len=1;
//   if(n>0)
//   {
//     for(len=0;n>0;len++)
//       n=n/10;
//   } 
//   return len; 
// }

// void SumOfOddEvenPlace(int n,int length)
// {
//   int OS,ES,temp;
//   for(int i=length-1;i>=0;i--)
//   {
//     temp=n%10;
//     if((1 & i) == 0)
//       ES+=temp;
//     else
//       OS+=temp;
//     n=n/10;    
//   }  
//   cout<<OS<<" " <<ES;
// }

// int main(int args,char** argv)
// {
//   int n;
//   cout<<endl<<"Enter the number: ";
//   cin>>n;
//   if(n<0)
//     exit(0);
//   else
//   {
      
//     SumOfOddEvenPlace(n);  
//   }
//   return 0;
// }




// ! 1 incorrect case and not used bit masking.

// #include<iostream>
// using namespace std;

// int lengthofnumber(int n)
// {
//   int len=1;
//   if(n>0)
//   {
//     for(len=0;n>0;len++)
//       n=n/10;
//   } 
//   return len; 
// }

// int digit(int n,int d,int length)
// {
//   int count=0,a;
//   for(int i=0;i<length;i++)   
//   {
//     a=n%10;
//     if(a==d)
//       count++;
//     n=n/10;
//   }  
//   return count;
// }

// int main(int args,char** argv)
// {
//   int n,d,length;
//   cout<<endl<<"Enter the number: ";
//   cin>>n;
//   cout<<"Enter the digit: ";
//   cin>>d;
//   if(n<1 || d>9 || d<0)
//     exit(0);
//   else
//   {  
//     length = lengthofnumber(n);
//     cout<<"Res: "<<digit(n,d,length)<<endl;  
//   }
//   return 0;
// }