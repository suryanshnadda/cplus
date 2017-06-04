#include<iostream>
#include<iomanip>
using namespace std;
const int left=3;
const int right=3;

void open (double[left][right]);

int main()

double values[left][right] =
{
  { 12.3421,13.7532423,187.09  },
   { 15.234,5635.24,754.245},
   { 15.234,5635.24,754.245}
};
open(values); //passing values to function open
}
void open(double points [left][right])
{
    int i;
    int j;
    for(i=0;i<left;i++)
    {
     for(j=0;i<right;j++)
     {
         cout<<setiosflags(ios::shpwpoint)<<    setw(6)<<setprecision(3)<<points[i][j];
     }
    }
}
