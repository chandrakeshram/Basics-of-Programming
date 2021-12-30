/*===============PROBLEM STATEMENT=======================
Write a program to check whether a number is divisible by 
both 2 and 3 or is divisible by only one of them or it is
not divisible by any of them
=========================================================*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number that you want to check :"<<endl;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"The number "<<n<<" is divisible by both 2 and 3 "<<endl;
    }
    else if(n%2==0 && n%3!=0){
        cout <<"The number is divisible by 2 only "<<endl;
    }
    else if(n%2!=0 && n%3==0){
        cout<<"The number is divisible by 3 only"<<endl;
    }
    else{
        cout<<"The number is not divisible by 2 and 3"<<endl;
    }
}
/*==============OUTPUT======================
Enter the number that you want to check :
47
The number is not divisible by 2 and 3
============================================
*/