/*==================PROBLEM STATEMENT==================
Write a program to check if a number is Armstrong or not
=======================================================
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to check: "<<endl;
    cin>>n;
    int lastdigit;
    int arm=0;
    int temp=n;
    while(temp>0){
        lastdigit=temp%10;
        temp/=10;
        arm+=pow(lastdigit,3);

    }
    if(n==arm){
        cout<<"It is a armstrong number "<<endl;
    }
    else {
        cout<<"It is not a armstrong number "<<endl;
    }
}
/*==================OUTPUT====================
Enter the number you want to check:
123
It is not a armstrong number

Enter the number you want to check:
370
It is a armstrong number
==============================================
*/