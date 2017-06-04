#include<iostream>
using namespace std;
int main()
{

    int a[5];
    int i;
    int temp;
    int j;
    int b[5];
    int c[5];
 cout<<"enter li";
 for(i=0;i<=4;i++)
 {
     cin>>a[i];
 }

 cout<<"now enter ri";
 for(i=0;i<=4;i++)
 {
     cin>>b[i];
 }

 cout<<"product";
for(i=0;i<=4;i++)
 {
     c[i]=a[i]*b[i];
 }
for(i=0;i<=4;i++)
 {
     cout<<c[i]<<endl;
 }


 for(i=0;i<4;++i)
    {
        for(j=0;j<(4-i);++j)
            if(a[j]>a[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
    }

cout<<"sorted array";
    for(i=0;i<=4;++i)
    {
        cout<<c[i]<<endl;

    }




 }
