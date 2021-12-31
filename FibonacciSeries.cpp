/*==================PROBLEM STATEMENT===============
Write a program to print the fibonacci series
====================================================*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}
/*===============OUTPUT=================
8
0 1 1 2 3 5 8 13
========================================
*/