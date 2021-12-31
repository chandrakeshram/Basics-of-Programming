/*==============PROBLEM STATEMENT=============
Write a function for calculating the factorial 
of the number 
==============================================
*/
#include <bits/stdc++.h>
using namespace std;
int fact(int n){      //function fact is created whose return type is int 
    int fact;
    fact =1;
    if(n==0 || n==1){
        fact =1;
    }
    else {
        while(n>0){
            fact *=n;//fact is calculated using while loop
            n--;
        }
    }
    return fact; //function fact() returns the factorial value of number
}
int main(){
    int n;
    cout<<"Enter the number whose factorial you want : "<<endl;
    cin>>n;
    cout<<"The factorial of the number "<<n<<" is "<<fact(n)<<endl;//fact() is called


}
/*====================OUTPUT===================
Enter the number whose factorial you want :
7
The factorial of the number 7 is 5040
===============================================
*/