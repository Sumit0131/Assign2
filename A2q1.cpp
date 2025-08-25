/*1) Implement the Binary search algorithm regarded as a fast search algorithm with 
run-time complexity of Ο(log n) in comparison to the Linear Search. */

#include<iostream>
using namespace std;





int binarysearch(int arr[],int k){
    
    int low=0;
    int high=6;
   
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        
        
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={3,5,7,8,9,12,15};
    int k=9;
    int result=binarysearch(arr,k);
    cout<<result;
    return 0;
}
