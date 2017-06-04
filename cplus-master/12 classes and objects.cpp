#include<iostream>
using namespace std;

 class square
  { int a;
    int b;
      public:   //access specifier
      void entry() //function entry
      {
       cout<<"enter a number";
       cin>>a;
      }
     void solve() //function solve
      {
      cout<<"square of a is \t";
      cout<<a*a<<endl;
      }

  };

int main()  //main function
 {
    square obj;    //object creation
    obj.entry();
    obj.solve();
 }
