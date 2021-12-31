/*================PROBLEM STATEMENT==================
Design a 0 and 1 Pattern using Nested For loops.
=====================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }
            else {
                cout<<" 0 ";
            }
        }
        cout<<endl;

    }
}
/*================OUTPUT==============
5
 1
 0  1
 1  0  1
 0  1  0  1
 1  0  1  0  1
 =====================================
*/