/*=================PROBLEM STATEMENT=================
Create a Hollow Rectangle using nested for loops 
=====================================================*/
#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows :"<<endl;
    cin>>row;
    cout<<"Enter the number of columns :"<<endl;
    cin>>col;
    for(int i=0;i<row ;i++){
        for(int j=0;j<col;j++){
            if(j==0 || i==0 || j==col-1 || i==row-1){
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
   

}
/*==============OUTPUT======================
Enter the number of rows :
8
Enter the number of columns :
7
 *  *  *  *  *  *  *
 *                 *
 *                 *
 *                 *
 *                 *
 *                 *
 *                 *
 *  *  *  *  *  *  *
 ==========================================
 */