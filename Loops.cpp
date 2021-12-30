#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which you want sum: "<<endl;
    cin>>n;
    int sum=0;  //sum is used to store the sum of the series 
    for(int i=1;i<=n;i++){ //here we have used for loop for counting the sum.
        sum+=i;  //sum is getting added for every value of i.

    }
    cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl; 
    //printed sum of the numbers.
/*=================OUTPUT===================
Enter the number upto which you want sum:
100
The sum of first 100 natural numbers is 5050
============================================
*/

/***************PROBLEM STATEMENT*************
Write a table using for loop 
*/
int no;
cout<<"Enter the number of table you want: "<<endl;
cin>>no;
cout <<"Table of "<<no<<" :"<<endl;
for(int i=1;i<=10;i++){
    cout<<no<<" x "<<i<<" = "<<no*i<<endl;
}
}
/*===================OUTPUT===============
Enter the number of table you want:
6
Table of 6 :
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54
6 x 10 = 60
==========================================
*/
