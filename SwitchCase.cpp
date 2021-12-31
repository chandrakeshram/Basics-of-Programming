/*====================PROBLEM STATEMENT===============
Design a basic calculator using switch statement */
#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    int result;
    cout<<"************BASIC CALCULATOR*************"<<endl;
    cout<<"Enter the first number : "<<endl;
    cin>>a;
    cout<<"Enter the second number : "<<endl;
    cin>>b;
    cout<<"Enter the operation that you want to perform  : "<<endl;
    cin>>c;
    switch (c)//switch statement is used to when we have multiple of if else conditions
    {
    case '+':
        result =a+b;
        cout<<"Addition will be "<<result<<endl;
        break;
    case '-':
        result =a-b;
        cout<<"Subtraction will be "<<result<<endl;
        break;
    case '*':
        result =a*b;
        cout<<"Multplication will be "<<result<<endl;
        break;
    case '/':
        if(a>b){
            result =a/b;
        }
        else {
            result =b/a;
        }
        cout<<"Division will be "<<result<<endl;
        break;
    default:
        cout<<"Entered an incorrect value . Please check your operator!"<<endl;
        break;
    }
}

/*===============OUTPUT=======================
CASE 1:
************BASIC CALCULATOR*************
Enter the first number :
23
Enter the second number :
56
Enter the operation that you want to perform  :
+
Addition will be 79

CASE 2:
************BASIC CALCULATOR*************
Enter the first number :
78
Enter the second number :
72
Enter the operation that you want to perform  :
-
Subtraction will be 6

CASE 3:
************BASIC CALCULATOR*************
Enter the first number :
4
Enter the second number :
20
Enter the operation that you want to perform  :
*
Multplication will be 80

CASE 4:
************BASIC CALCULATOR*************
Enter the first number :
88
Enter the second number :
11
Enter the operation that you want to perform  :
/
Division will be 8
*/
