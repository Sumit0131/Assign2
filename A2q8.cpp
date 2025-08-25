/*8) Write a program to count the total number of distinct elements in an array of length 
n.*/

#include<iostream>
using namespace std;
int arr[]={1,2,3,4,5,6,6,7,7};
int count=0;

int main(){
    for(int i=0;i<9;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }}
        if(j==i){
            count=count+1;
        }
}
cout<<"Total Distinct :"<<count;
return 0;
}