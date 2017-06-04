#include<iostream>
using namespace std;

class fun
{

    int x;
    int y;

    public:

    void code();
    int solve();

};

void fun ::code()
 {
     cout<<"hello guys i am function defined outside the class"<<endl;
     cout<<"enter a number"<<endl;
     cin>>x;

     cout<<"x ="<<x<<endl;


 }

int fun ::solve()
 {
      cout<<"enter value of y"<<endl;
      cin>>y;

      x=x*y;
      return (x);
 }


 int main()
  {
      fun obj;
      obj.code();
      int a=obj.solve();
      cout<<a;
  }
