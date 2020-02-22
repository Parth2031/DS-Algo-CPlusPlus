// TODO:: Printing Odd & Even Numbers using Recursion.
// ? In this Question, Print Odd Numbers in Decreasing Sequence first and then Even Numbers in Increasing Sequence later.
//  * Example: Input:--> {6} and Output:--> {5,3,1,2,4,6}.
// ! Recursion in two ways:- Void Type and Return Type (Not Done Yet).

#include<iostream>
using namespace std;

void OddEvenNumPrint(int n)
{
  if(n==0)
    return;
  if((1 & n) == 0)
  {
    OddEvenNumPrint(n-1);
    cout<<n<<endl;
  } 
  else
  {
    cout<<n<<endl;  
    OddEvenNumPrint(n-1);
  }    
}

int main(int args,char** argv)
{
  int num;
  cout<<endl<<"Enter the Number: ";
  cin>>num;
  OddEvenNumPrint(num);
  return 0;
}