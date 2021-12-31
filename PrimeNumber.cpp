/*==================PROBLEM STATEMENT===================
Write a program for checking if the number is prime or 
not.
========================================================
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    bool isPrime =0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Please enter a positive value!!!!"<<endl;
    }
    else if(n==0 || n==1){
        cout<<n<<" is neither prime nor composite"<<endl;
    }
    else {
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=1;
                break;

            }
                                                                                                                         
        }
        if(isPrime==0){
            cout<<"This number is a Prime Number"<<endl;
        }
        else {
            cout<<"This number is a Composite Number "<<endl;
        }
    }
    
}
/*========================OUTPUT========================
CASE 1:
Enter the number :
0
0 is neither prime nor composite

CASE 2:
Enter the number :
1
1 is neither prime nor composite

CASE 3:
Enter the number :
25
This number is a Composite Number

CASE 4:
Enter the number :
37
This number is a Prime Number
*/