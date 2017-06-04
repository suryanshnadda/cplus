//if else statement
#include<iostream>
using namespace std;

 int main()
  {
      int a;

      cout<<"enter your age";
      cin>>a;

       if(a<=10)
       {
           cout<<"you are a kid"<<endl;
       }
       else if(a>10&&a<20)
       {
        cout<<"you are teenager"<<endl;
       }
       else if(a>20&&a<30)
       {
           cout<<"you are young,get married soon"<<endl;
       }
       else
       {
           cout<<"i dont know what you are\n";
       }
  }
