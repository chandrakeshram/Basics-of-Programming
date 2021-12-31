/*==================PROBLEM STATEMENT==================
Write a program to reverse a integer 
=======================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int lastdigit;
    cout<<"Enter the number you want to reverse :"<<endl;
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        n/=10;
        rev=rev*10+lastdigit;
    }
    cout<<"Reversed Number is "<<rev<<endl;
}
/*===================OUTPUT====================
Enter the number you want to reverse :
1475
Reversed Number is 5741
===============================================
*/