/*=================PROBLEM STATEMENT======================
Write a program to convert decimal number to hexadecimal 
number.
==========================================================
*/
#include <bits/stdc++.h>
using namespace std;
void dectoHexadec(int n){
    char arr[50];
    int rem;
    int i=0;
    if(n==0 ){
        cout<<"Hexadecimal Equivalent will be :00"<<endl;
    }
    else {
        while(n>0){
            rem=n%16;
            if(rem<10){
                arr[i]=rem +'0';
                
            }
            else {
                arr[i]=rem + '7';
            }
            i++;
            n/=16;
        }
        cout<<"Hexadecimal Equivalent will be :";
        for(int j=i-1;j>=0;j--){
            cout<<arr[j];
        }
    }

}
int main(){
    int n;
    cout<<"Enter the Decimal Number :"<<endl;
    cin>>n;
    dectoHexadec(n);
    cout<<endl;

}
/*
/*===============OUTPUT==========================
Enter the Decimal Number :
76
Hexadecimal Equivalent will be :4C
=================================================
*/