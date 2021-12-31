/*===============PROBLEM STATEMENT ===================
Design a Butterfly Pattern using Nested for loops 
======================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int k=1;k<n+1-i;k++){
            cout<<"   ";
        }
        for(int l=1;l<n+1-i;l++){
            cout<<"   ";
        }
        for(int m=1;m<=i;m++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<" * ";
        }
        for(int k=1;k<i;k++){
            cout<<"   ";
        }
        for(int l=1;l<i;l++){
            cout<<"   ";
        }
        for(int m=1;m<=n+1-i;m++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
/*==============OUTPUT===================
5
 *                          *
 *  *                    *  *
 *  *  *              *  *  *
 *  *  *  *        *  *  *  *
 *  *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *  *
 *  *  *  *        *  *  *  *
 *  *  *              *  *  *
 *  *                    *  *
 *                          *
 =========================================*/