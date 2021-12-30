/*============INVERTED RIGHT ANGLED TRIANGLE========*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
/*============OUTPUT=============
5
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
 ===============================
 */