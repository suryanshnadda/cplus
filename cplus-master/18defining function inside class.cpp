#include<iostream>
using namespace std;

class dlf
{
    int x=2;
    int y=45;

public:

    void india()
    {
        cout<<"product of x and y is\t"<<x*y<<endl;
    }

    void ind(int x)
    {
        cout<<"square of x through argument is\t"<<x*x<<endl;
    }

    void in(int x,int y=56)

    {

      cout<<"product is\t"<<x*y<<endl;

    }


};

int main()
{

    dlf obj;
    obj.india();
    obj.ind(56);
    obj.in(45);
}
