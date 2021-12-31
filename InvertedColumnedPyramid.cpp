/*=================PROBLEM STATEMENT================
Design a Half Inverted Column Numbered Pyramid using 
nested for loops 
====================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
/*=================OUTPUT====================
1  2  3  4  5
 1  2  3  4
 1  2  3
 1  2
 1
 =============================================
 */