/*=================PROBLEM STATEMENT================
Write a program to convert decimal number to binary 
number.
====================================================
*/
#include <bits/stdc++.h>
using namespace std;
void dectoBinary(int n){
    int arr[10];
    int rem;
    int i=0;
    if(n==0 ){
        cout<<"Binary Equivalent will be :00"<<endl;
    }
    else {
        while(n>0){
            rem=n%2;
            n/=2;
            arr[i]=rem;
            i++;
        }
        cout<<"Binary Equivalent will be :";
        for(int j=i-1;j>=0;j--){
            cout<<arr[j];
        }
    }

}
int main(){
    int n;
    cout<<"Enter the Decimal Number :"<<endl;
    cin>>n;
    dectoBinary(n);
    cout<<endl;

}
/*
/*===============OUTPUT==========================
Enter the Decimal Number :
7
Binary Equivalent will be :111
=================================================
*/