#include<iostream>
using namespace std;
  int main()
    {
      char a;
      cout<<"Select your block \n a:BLOCK 1 \n b:BLOCK 2 \n c:BLOCK 3 \n d:BLOCK 4"<<endl;
      cin>>a;
      switch(a)
        {
           case 'a':
             cout<<"\n cse block";
             break;
           case 'b':
             cout<<"aerospace block";
             break;
           case 'c':
             cout<<"mechanical block";
             break;
           case 'd':
             cout<<"civil block";
             break;
           default:
              cout<<"wrong input";
      }
      cout<<"Select your branch \n a:CSE \n b:ME \n c:CIVIL \n d:ELECTRONICS"<<endl;
      cin>>a;
       switch(a)
        {
           case 'a':
             cout<<"\n Programming";
             break;
           case 'b':
             cout<<"Machines";
             break;
           case 'c':
             cout<<"Building";
             break;
           case 'd':
             cout<<"Chips";
             break;
           default:
              cout<<"wrong input";
       }

      return(0);
    }
