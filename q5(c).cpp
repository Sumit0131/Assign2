/*(c) Lower triangular Matrix.*/

#include<iostream>
using namespace std;

int arr[4][4]={{1,0,0,0},{2,5,0,0},{3,6,8,0},{4,7,9,10}};

int c[]={};
int main(){
    int k=0;

    for(int i=0;i<4;i++){
        c[k++]=arr[i][i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            c[k++]=arr[j][i];
        }
    }
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
}