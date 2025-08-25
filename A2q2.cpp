/*Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping 
the adjacent elements if they are in wrong order. Code the Bubble sort with the 
following elements*/

#include<iostream>
using namespace std;

int bubblesort(int arr[]){
    for(int i=0;i<7;i++){

        for(int j=0;j<7;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){
    int arr[]={64,34,25,12,22,11,90};
    
    int result=bubblesort(arr);

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    //cout<<result;
    return 0;

}