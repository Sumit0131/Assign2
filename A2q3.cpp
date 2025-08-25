/*3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 
distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
(a) Linear time 
(b) Using binary search. */


#include<iostream>
using namespace std;

int missing(int arr[],int origsize,int sums){
    //int sums=sortsize*(sortsize+1)/2;
    int sumo=origsize*(origsize+1)/2;
    int missnumber=sumo-sums;
    return missnumber;

}


int main(){

    int arr[]={1,2,3,4,5,6,7,8,10};
    int sums=0;
    for(int i=0;i<9;i++){
        sums+=arr[i];
    }

    int origsize=10;

    int result=missing(arr,origsize,sums);
    cout<<result;
}