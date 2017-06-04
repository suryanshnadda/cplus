#include<iostream>
using namespace std;
 int main()
 {
 /*
 Reference are similar to pointers
 Reference are defined once

 You can never have a NULL reference.
 Reference is automatically dereferenced.

 */

 int a;

 cout<<"enter a number";
 cin>>a;
 cout<<"now we will pass thr reference of a to the b\t";
 int &b = a;  // b is reference to a

 cout<<b<<endl;;


 }
