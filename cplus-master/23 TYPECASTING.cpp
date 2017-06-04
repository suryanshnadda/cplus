#include<iostream>
using namespace std;

int main()

 {
   int q = 31;
   int w = 3;
   float e = q/w;
   float r = static_cast<float>(q)/w;
   cout << "Before conversion   " << e << endl;
   cout << "After conversion   " << r<< endl;
}

