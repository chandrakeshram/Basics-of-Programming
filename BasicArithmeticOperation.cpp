#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;

    int add;   //add is used to store addition of the two numbers.
    add=a+b;
    cout<<"Additon will be : "<<add<<endl;  //display addition
    int sub;   //sub is used to store subtraction of the two numbers.
    sub=a-b;
    cout<<"Subtraction will be : "<<sub<<endl;  //display subtraction
    int product; //product is used to store Multiplication of the two numbers.
    product=a*b;
    cout<<"Multiplication will be : "<<product<<endl;  //display multiplication
    int division; //division is used to store division of the two numbers.
    division=a/b;
    cout<<"Division will be : "<<division<<endl;   //display division
}
/*==========OUTPUT==============
Enter First Number : 45
Enter Second Number :5
Additon will be : 50
Subtraction will be : 40
Multiplication will be : 225
Division will be : 9
===============================
*/