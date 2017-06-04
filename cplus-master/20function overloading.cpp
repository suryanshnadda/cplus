#include<iostream>
using namespace std;

class fun
   {

    public:

    void man(int x)
    {
    cout<<"enter a number";        // this is hack here explain it
    cin>>x;

    x=x*x*x;

    cout<<"cube of x is\t"<<x<<endl;
    }

    void man(int x,int y)
    {

       cout<<x-y<<endl;
    }

    };
int main()
 {

     fun obj;
     obj.man(45);
     obj.man(34,56);
 }
