/*=================PROBLEM STATEMENT================
Write a program to convert binary number to decimal 
number.
====================================================
*/
#include <iostream>
using namespace std;
int binaryToDec(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans +=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Binary Number :"<<endl;
    cin>>n;
    cout<<"The Decimal Equivalent to Number is "<<binaryToDec(n)<<endl;
}
/*===============OUTPUT==========================
Enter the Binary Number :
111
The Decimal Equivalent to Number is 7
=================================================
*/