#include<iostream>  //preprocessor directive (instructions to instructions to compiler)
using namespace std;
  int a=1;   //global scope

  int code()
  {
        cout<<"hello"<<a<<"\t";
        if(a<150) {
           a++;
            code();
        }

  }

/*void code()
{
    cout<<"hello";
    code();
}
*/
int main()
//use void main to show the difference(why void main is soo creppy)
{
   code();
    int a;
    //cin>>a;
    cout<<"this is our first program";
    return(0);  // return is only with int main
    //return is used to terminate the main function
}
//now will remove 2nd line and then run the program
//ok so now replace cout with std::cout
//now it will work fine
//creating function inside a function
//calling function

