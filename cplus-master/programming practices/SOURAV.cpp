#include<iostream>

using namespace std;

int main()
{
    int i;
    int a[20];
    int n;
    int j;
    int temp;
    cout<<"array size";
    cin>>n;
    cout<<"insert elements: ";

    for(i=0;i<n;++i)
        cin>>a[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    int k=0;
    for(i=1;i<n-1;i++)
    {
        k=a[i]+k;

    }

     k=k/(n-2);
     cout<<k;
 }
