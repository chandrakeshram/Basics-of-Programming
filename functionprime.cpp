#include <iostream>
#include <cmath>
using namespace std;
/* Here we have written a function for printing prime number of the
given limits.
We have used boolean return type for the isPrime() function so it 
will return either true or false .
This is one of the question for placement practice.*/

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true ;

}
int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}