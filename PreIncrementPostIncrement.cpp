#include <iostream>
using namespace std;
int main(){
    int a,b;
    a=20;
    b=50 ;
    int choice;
    do{
        cout<<"==========PreIncrementation And PostIncrementation========== "<<endl;
        cout<<"1.Result Without Incrementation: "<<endl;
        cout<<"2.Result With PreIncrementation: "<<endl;
        cout<<"3.Result With PostIncrementation: "<<endl;
        cout<<"Enter the Choice : "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Result Without Increment :" <<a+b<<endl;
            break;
    
        case 2:
            cout<<"Result Using PreIncrement : "<<((++a)+(++b))<<endl;
            break;
        case 3:
            cout<<"Result Using PostIncrement : " <<((a++)+(b++))<<endl;
            break;
        default :
            cout<<"Sorry You have entered an incorrect choice "<<endl;
            break;
        }
    }
    
    while(choice!=3);
    return 0;
    
}
/*==============OUTPUT=====================
==========PreIncrementation And PostIncrementation==========
1.Result Without Incrementation:
2.Result With PreIncrementation:
3.Result With PostIncrementation:
Enter the Choice :
1
Result Without Increment :70
==========PreIncrementation And PostIncrementation==========
1.Result Without Incrementation:
2.Result With PreIncrementation:
3.Result With PostIncrementation:
Enter the Choice :
2
Result Using PreIncrement : 72
==========PreIncrementation And PostIncrementation==========
1.Result Without Incrementation:
2.Result With PreIncrementation:
3.Result With PostIncrementation:
Enter the Choice :
3
Result Using PostIncrement : 72
*/