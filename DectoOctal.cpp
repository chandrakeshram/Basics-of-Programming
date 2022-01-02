/*=================PROBLEM STATEMENT================
Write a program to convert decimal number to octal
number.
====================================================
*/
#include <bits/stdc++.h>
using namespace std;
void dectoOctal(int n){
    int arr[10];
    int rem;
    int i=0;
    if(n==0 ){
        cout<<"Octal Equivalent will be :00"<<endl;
    }
    else {
        while(n>0){
            rem=n%8;
            n/=8;
            arr[i]=rem;
            i++;
        }
        cout<<"Octal Equivalent will be :";
        for(int j=i-1;j>=0;j--){
            cout<<arr[j];
        }
    }

}
int main(){
    int n;
    cout<<"Enter the Decimal Number :"<<endl;
    cin>>n;
    dectoOctal(n);
    cout<<endl;

}
/*
/*===============OUTPUT==========================
Enter the Decimal Number :
15
Octal Equivalent will be :17
=================================================
*/