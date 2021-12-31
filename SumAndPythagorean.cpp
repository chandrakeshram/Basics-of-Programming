/*=======================PROBLEM STATEMENT========================
Write a program that consists of two functions for sum of natural
numbers and for checking whether pythagorean triplet or not
==================================================================*/
#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int n){
    int sum;
    sum=((n*(n+1))/2);
    return sum;
}
bool isPythagoreanTriplet(int a,int b,int c){
    if(((a*a)+(b*b)) ==(c*c) || ((a*a)+(c*c)) ==(b*b) || ((c*c)+(b*b)) ==(a*a)){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cout<<"Enter the number upto which you want the sum :"<<endl;
    cin>>n;
    cout<<"The sum of all the natural numbers upto "<<n<<" is "<<sumOfNaturalNumbers(n)<<endl;
    int a,b,c;
    cout<<"Enter the first side : "<<endl;
    cin>>a;
    cout<<"Enter the second side :"<<endl;
    cin>>b;
    cout<<"Enter the third side :"<<endl;
    cin>>c;
    if(isPythagoreanTriplet(a,b,c)){
        cout<<"It is a Pythagorean Triplet "<<endl;
    }
    else {
        cout<<"It is not a Pythagorean Triplet"<<endl;
    }
}
/*================OUTPUT========================
Enter the number upto which you want the sum :
10
The sum of all the natural numbers upto 10 is 55
Enter the first side :
3
Enter the second side :
4
Enter the third side :
5
It is a Pythagorean Triplet
===============================================
*/
