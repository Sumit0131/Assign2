/*1) Find two numbers in an array whose difference equals K. Given an array arr[] and a 
positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of 
(arr[i] - arr[j]) is equal to k.*/

#include<iostream>
using namespace std;

int arr[]={1,2,3,4,5,6,7,9};
int k=2;
int count=0;
int main(){
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(abs(arr[j]-arr[i])==2){
                cout<<"Numbers are :"<<arr[i]<<" and "<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<"Total pairs are :"<<count;
    return 0;
}