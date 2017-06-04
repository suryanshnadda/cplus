#include<iostream>
using namespace std;

class funcall
 {
     public:
     funcall()
     {
        int x;
        cout<<"enter your age";
        cin>>x;


        if(x>18)
        {

            cout<<"you are adult \xdd"<<endl;
        }
        else
            cout<<"you are not adult"<<endl;

     }

     funcall( long long  a,long long b)
     {
         cout<<"number of students";
         cin>>a;

         cout<<"examination fess";
         cin>>b;

         a=a*b;

         cout<<"sum total money is\t"<<a;

     }


 };

 int main()
 {
     funcall in;
     funcall obj(0,56);

 }
