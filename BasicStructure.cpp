#include <iostream> 
//#include is called as Preprocessor directive used to include files
//<iostream> is header files that contains all the libraries, STLs etc.
using namespace std;
int main(){    //Program execution always starts from main function 
    int age;
    cout<<"Enter the age : "<<endl;  // endl is used to break line and jump to new line
    //cout is used to display the text or output.
    cin>>age;
    //cin is used to take input from the user 
    cout<<"Your age is : "<<age<<endl;
    return 0;//This ends the execution of the program.
}
/*=======OUTPUT===============
Enter the age :
45
Your age is : 45
==============================
*/