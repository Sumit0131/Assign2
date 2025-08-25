/*7) Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an 
inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to 
count the number of inversions in an array.*/

#include<iostream>
using namespace std;
int arr[]={1,2,3,5,4,6,7,8,10,9};

int main(){
    int count=0;
    for(int i=0;i<9;i++){
        if(i<i+1 && arr[i]>arr[i+1]){
            count=count+1;
            cout<<arr[i]<<","<<arr[i+1];
            cout<<"\n";

        }
    }
    cout<<"Number of inversion pair :"<<count;
}