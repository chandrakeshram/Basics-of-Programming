/*==============PROBLEM STATEMENT================
Print all the odd numbers between 1 to 45.
=================================================
*/
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            continue;   //continue helps to skip the current execution and move to next execution
        }
        else if(i>45){
            break;    //break terminates the entire loop
        }
        else {
            cout<<i<<endl;
        }
    }

}
/*==================OUTPUT====================
1
3
5
7
9
11
13
15
17
19
21
23
25
27
29
31
33
35
37
39
41
43
45
*/