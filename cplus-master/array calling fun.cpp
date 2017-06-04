#include<iostream>
#include<iomanip>
using namespace std;

const int dis = 4;
const int month = 3;

int main()
{
 int d ,m;
 double sales[dis][month];

 cout<<endl;

 for(d=0;d<dis;d++)
    for(m=0;m<month;m++)
 {
     cout<<"enter sales for dis"<<d+1;
     cout<<",month"<<m+1<<" : ";
     cin>>sales[d][m];
 }
 cout<<"\n\n";
 cout<<" month \n";
 cout<<"     1      2    3";

 for(d=0;d<dis;d++)
 {
     cout<<"\n dis"<<d+1;
     for(m=0;m<month;m++)
     {

         cout<<setiosflags(ios::showpoint)<<setprecision(3)<<sales[d][m];
     }
 }
 cout<<endl;
 return 0;

}
