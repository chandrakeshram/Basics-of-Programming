/*================PROBLEM STATEMENT================
Design a Half Pyramid  Using Numbers with the help 
of Nested for loops
===================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}
/*==================OUTPUT==================
5
 1
 2  2
 3  3  3
 4  4  4  4
 5  5  5  5  5
 ===========================================
 */