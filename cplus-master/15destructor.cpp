#include<iostream>
using namespace std;
 class fun
 {
      string a;
      public:
      fun()
       {
        cout<<"enter your name\t";
        cin>>a;

       }
      ~fun()
       {
        cout<<"your name is\t"<<a<<endl;
       }


  };

  int main()
   {
       fun obj;

   }
