#include<iostream>
using namespace std;
int main()
{

int a[5];
int i;
int s=0;
int c=0;
cout<<"enter elements of array";
for(i=0;i<=4;i++)
{

    cin>>a[i];

}
cout<<"sum of array elements";
for(i=0;i<=4;i++)
{

s=s+a[i];

}
cout<<s<<endl;

cout<<"now enter a number greater the sum of array";

cin>>a[5];

s=s+a[i];


cout<<s<<endl;


if(s%2==0)
{
    cout<<s<<"sum is even in nature";

}

else
    cout<<"sum is odd in nature";



}
