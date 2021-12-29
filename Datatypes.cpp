#include <iostream>
using namespace std;
int main(){
    int a;
    a=33;
    cout<<"Size of the integer :"<<sizeof(a)<<endl;
    cout<<"Value is :"<<a<<endl;
    char c='c';
    cout<<"Size of the character :"<<sizeof(c)<<endl;
    cout<<"Value is :"<<c<<endl;
    float f=32.3f;
    cout<<"Size of the float :"<<sizeof(f)<<endl;
    cout<<"Value is :"<<f<<endl;
    bool b=1;
    cout<<"Size of the boolean is :"<<sizeof(b)<<endl;
    cout<<"Value is :"<<b<<endl;
}
/*==========OUTPUT==============
Size of the integer :4
Value is :33
Size of the character :1
Value is :c
Size of the float :4
Value is :32.3
Size of the boolean is :1
Value is :1
===============================
*/