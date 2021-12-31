/*=================PROBLEM STATEMENT======================
Design a Rhombus Pattern using nested for loops
==========================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n+1-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*================OUTPUT=======================
5
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
===============================================
*/