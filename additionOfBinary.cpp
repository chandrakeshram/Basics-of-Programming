#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        rev=rev*10 +lastdigit;
        n/=10;
    }
    return rev;
}
int addBinary(int a,int b){
    int ans=0;
    int prevCarry=0;
    while(a>0 && b>0){
        if((a%2==0) && (b%2==0)){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if(((a%2==1) && (b%2==0)) || ((a%2==0) && (b%2==1))){
            if(prevCarry==1){
                ans=ans*10 +0;
                prevCarry=1;
            }
            else {
                ans=ans*10 +1;
                prevCarry=0;
            }
        }
        else {
            ans=ans*10 + prevCarry;
            prevCarry =1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans=ans*10 + 0;
                prevCarry =1;
            }
            else {
                ans=ans*10 + 1;
                prevCarry=0;
            }
        }
        else {
            ans=ans*10 + (a%2);
        }
        a/=10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans=ans*10 + 0;
                prevCarry =1;
            }
            else {
                ans=ans*10 + 1;
                prevCarry=0;
            }
        }
        else {
            ans=ans*10 + (a%2);
        }
        b/=10;
    }
    ans =reverse(ans);
    return ans;
}
int main(){
    int a;
    int b;
    cout<<"Enter the first binary number "<<endl;
    cin>>a;
    cout<<"Enter the second binary number "<<endl;
    cin>>b;
    cout<<"Binary Addition will be "<<addBinary(a,b)<<endl;

}