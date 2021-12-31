/*================PROBLEM STATEMENT===========================
Design a Palindromic Pattern with the help of nested for loops 
==============================================================*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<n+1-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        for(int l=2;l<=i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}
/*================OUTPUT=================
5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
=========================================*/