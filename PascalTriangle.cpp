/*==================PROBLEM STATEMENT===================
Write a program for Pascal Triangle
========================================================
*/
#include <iostream>
using namespace std;
int fact(int n){
    int fact =1;
    while(n>0){
        fact *=n;
        n--;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the value for Pascal Triangle: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<(fact(i))/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
} 
    
/*====================OUTPUT======================
Enter the value for Pascal Triangle:
5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
==================================================
*/