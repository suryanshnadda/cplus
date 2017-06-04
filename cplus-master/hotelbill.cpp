#include <cmath>
#include <iostream>

using namespace std;


int main() {
   cout<<"enter meal cost";
    double c;
    cin>>c;

    cout<<"enter tip percentage";
    double t;
    cin>>t;

    cout<<"enter tex percentage";
    double te;
    cin>>te;


    t=c*(t/100);
    cout<<t<<endl;

    te=c*(te/100);
    cout<<te<<endl;
    cout<<"he total meal cost is "<<round(c+te+t)<<"dollars."<<endl;
    return 0;
}
