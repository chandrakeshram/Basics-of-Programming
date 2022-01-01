/*=================PROBLEM STATEMENT================
Write a program to convert octal number to decimal 
number.
====================================================
*/
#include <iostream>
using namespace std;
int octalToDec(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans +=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Octal Number :"<<endl;
    cin>>n;
    cout<<"The Decimal Equivalent to Number is "<<octalToDec(n)<<endl;
}
/*===============OUTPUT==========================
Enter the Octal Number :
17
The Decimal Equivalent to Number is 15
=================================================
*/