#include<iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout<<"enter a number";
    cin>>a;

    cout<<"enter another number";
    cin>>b;

    if(a==b)
    {
        cout<<"both numbers are equal"<<endl;
    }
    else if(a>b)
    {
       cout<<"a is greater then b"<<endl;

      if(b!=a)
       {
        cout<<"a is not equal to b"<<endl;
       }
    }
    else if(b>a)
    {
        cout<<"b is greater then a"<<endl;

        if(b!=a)
        {
        cout<<"a is not equal to b"<<endl;
        }
    }
    else if(a>=b)
    {
        cout<<"a is greater then equal to b"<<endl;
    }
    else if(a<=b)
    {
         cout<<"b is greater then equal to a"<<endl;
    }

}
