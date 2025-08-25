/*/*3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 
distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
(a) Linear time 
(b) Using binary search. */


#include<iostream>
using namespace std;

int binarysearch(int arr[]){
    int low=0;
    int high=8;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=mid+1){
            return mid+1;
        }
        else if(arr[mid]>mid+1){
            high=mid-1;
        }
        else{
            low=mid-1;
        }
    }
}


  int main(){
    int arr[]={1,2,3,4,5,6,8,9,10};

    int result=binarysearch(arr);
    cout<<result;


  }