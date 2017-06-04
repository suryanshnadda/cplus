#include<iostream>
using namespace std;

 class funcall   //class defined
 {  private:
     int a;
     int b;

     public:   //access specifier

     void entry(int s)
      {
          int a=s;
          cout<<"square of entered number is"<<a*a<<endl;
      }



 };
  int main()
  {
   funcall obj;
   obj.entry(12);
  }
