//array string
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i;
int maz=10;
string a[maz];    //string array is here


    cout<<"enter values"<<endl;

    for(i=0;i<10;i++)
    {
    cin>>a[i];
    }


   for(i=0;i<10;i++)
   {
    cout<<setw(10)<<a[i]<<endl;  //using setw function to better arrangement
   }

}
