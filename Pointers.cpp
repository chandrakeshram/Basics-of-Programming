/*************************POINTERS*********************
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    a=10;
    int *ptr=&a;  //here we have stored the address of 'a' with the help of pointer
    cout<<"Address of a :"<<ptr<<endl;// '&' sign is used to store the address
    cout<<"Value of a :"<<*ptr<<endl;// * can also be called as "Value at " 
    cout<<"After addition of 1 :"<<ptr+1<<endl;
    int **ptr_ptr=&ptr; //here we have created a double pointer which contains address of another pointer
    cout<<"Address of ptr :"<<ptr_ptr<<endl;
    cout<<"Value at ptr_ptr :"<<*ptr_ptr<<endl;
    cout<<"Value at *ptr_ptr :"<<**ptr_ptr<<endl;  
}
/*==================OUTPUT=====================
Address of a :0x22fe44
Value of a :10
After addition of 1 :0x22fe48
Address of ptr :0x22fe38
Value at ptr_ptr :0x22fe44
Value at *ptr_ptr :10
================================================
*/