#include<iostream>
using namespace std;

class X
{
    public:
 int i;
 public:


 X(int x)   // Constructor
 { i=x; }

 int f() const    // Constant function
 {  }

 int g()
 { i++; }
};

int main()
{
X obj1(10); '='         // Non const Object
const X obj2(20);   // Const Object

obj1.f();   // No error
obj2.f();   // No error

cout << obj1.i << obj2.i ;

obj1.g();   // No error

}
