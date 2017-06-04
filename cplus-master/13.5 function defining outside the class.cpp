#include<iostream>
using namespace std;
 class fun
  { int a;

    public:
    int b;
    void sun();
  };
  void fun::sun()
  { cout<<"enter  a number";
    cin>>a;
    a++;
    cout<<"increment of your number is"<<a<<endl;
  }

int main()
  {

   fun obj;
   obj.sun();
   obj.b=23;
   cout<<"value of b is "<<obj.b<<endl;
  }
