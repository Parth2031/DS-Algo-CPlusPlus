// ^ Understanding Tower of Hanoi Rules:-
// ? Rule 1 -> One disk can be moved at a time.
// * Rule 2 -> No disk can be placed on top of the smaller disk.
// & Rule 3 -> Shifting disk from source A to destiation C using auxiliary B. So, there are 3 towers.

// ! Time Complexity => 2^n+1 -1 = O(2^n)

#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char Source,char Auxiliary,char Destination)
{
  if(n > 0)
  {
    TowerOfHanoi(n-1, Source, Destination, Auxiliary);
    cout<<"Move the disk "<<"from "<<Source<<" To "<<Destination<<endl;
    TowerOfHanoi(n-1, Auxiliary, Source, Destination);
  }

  // ~ OR

  // if(n == 0)
  //   return;

  // TowerOfHanoi(n-1, Source, Destination, Auxiliary);
  // cout<<"Move the disk "<<"from "<<Source<<" To "<<Destination<<endl;
  // TowerOfHanoi(n-1, Auxiliary, Source, Destination);
}

int main(int args, char** argv)
{
  char A,B,C;
  cout<<endl;
  TowerOfHanoi(3,'A','B','C'); 
  return 0;
}