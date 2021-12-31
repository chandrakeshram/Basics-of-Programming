/*==============PROBLEM STATEMENT================
Write a program to print all the prime numbers
between two given limits
=================================================
*/
#include <iostream>
using namespace std;
int isPrime(int n){
    if(n<2 ){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;    
            break;
        }
    }
    return true ;
    
}
int main(){
    int a,b;
    cout<<"Enter the Upper Limit :"<<endl;
    cin>>a;
    cout<<"Enter the Lower Limit :"<<endl;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i) ){
            cout<<i<<" ";
        }
    }
}
/*===============OUTPUT=========================
Enter the Upper Limit :
10
Enter the Lower Limit :
20
11 13 17 19
*/