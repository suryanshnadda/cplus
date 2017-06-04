//just explain it for basics

#include<iostream>
using namespace std;
int main()
   {
    int a;
    char b;
    float c;
    string d;
    int e[4]={1,2,4,5};
    int f;

    cout<<"enter a number \t";
    cin>>a;

    cout<<"enter a character \t";
    cin>>b;

    cout<<"enter a float value \t";
    cin>>c;

    cout<<"enter a string \t";
    cin>>d;

          cout<<"int a ="<<a<<endl;
          cout<<"char b ="<<b<<endl;
          cout<<"float c="<<c<<endl;
          cout<<"string d ="<<d<<endl;
          cout<<"array  f = \t";


      for(f=0;f<4;f++)
      {
       cout<<e[f]<<"\t";
      }

return(0);
   }
