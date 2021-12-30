#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the first no. : "<<endl;
    cin>>a;
    cout<<"Enter the second no. : "<<endl;
    cin>>b;
    if(a>b){                                           //Here if the condition in the bracket becomes false then it will go to else if block.
        cout<<a<<" is greater than "<<b<<endl;         //If not it will execute the code in if part.
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else {                                            //If none of the condition becomes true then this part will get executed.
        cout<<"Both numbers are equal "<<endl;
    }
    return 0;
}
/*==========OUTPUT==================
Case 1:
Enter the first no. :
47
Enter the second no. :
26
47 is greater than 26
====================================
Case 2:
Enter the first no. :
12
Enter the second no. :
54
54 is greater than 12
====================================
Case 3:
Enter the first no. :
47
Enter the second no. :
47
Both numbers are equal
*/
