/*=================PROBLEM STATEMENT================
Write a program to convert hexadecimal number to
decimal number.
====================================================
*/
#include <bits/stdc++.h>
using namespace std;
int hexadecToDec(string n){
    int ans=0;
    int x=1;
    int size=n.length();
    for(int i=size -1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans +=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string  n;
    cout<<"Enter the Hexadecimal Number :"<<endl;
    cin>>n;
    cout<<"The Decimal Equivalent to Number is "<<hexadecToDec(n)<<endl;
}
/*===============OUTPUT==========================
Enter the Hexadecimal Number :
1CF
The Decimal Equivalent to Number is 463
=================================================
*/