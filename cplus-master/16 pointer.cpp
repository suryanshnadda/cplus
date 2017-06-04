#include<iostream>
using namespace std;

 class fun
  {
      int a;
      int *b;
      int **c;
      public:
   void me()
    {

      cout<<"enter a number";
      cin>>a;

      cout<<"you entered \t"<<a<<endl;
      cout<<"pointer address b\t"<<&b<<endl;
      cout<<"address of variable\t"<<&a<<endl;


      b=&a; // pointer pointing toward integer
      c=&b;
     cout<<"the pointer now stores value b\t "<<*b<<endl;
     cout<<"now the address of pointer b \t"<<b<<endl;

     cout<<"address of c variable \t"<<c<<endl;
     cout<<"value stored at pointer c \t"<<**c<<endl;
     cout<<"address of c variable \t"<<c<<endl;
    }
  };
  int main()
   {
       fun obj;
       obj.me();
   }
