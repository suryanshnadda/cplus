//explain about global and local scope
#include<iostream>
using namespace std;
 int a; // global; variable

   int fun()
    {
      int b;  //local variable
      cout<<"enter a number";
      cin>>a;

      cout<<"enter next number";
      cin>>b;
    }
    //fun function end
   int sun()
    {
    cout<<"you entered \t";
    cout<<a;
    }

  int main()
    {
      fun();
      sun();
      return(0);
    }
