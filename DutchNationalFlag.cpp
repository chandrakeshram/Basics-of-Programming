/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnf(int arr[],int n){
    int low =0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;

        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr,mid ,high);
            high--;
        }
    }
}
int main()
{
    int arr[]={1,0,1,2,2,0,0,1,0,2,2,1,1,0};
    dnf(arr,14);
    for(int i=0;i<14;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/