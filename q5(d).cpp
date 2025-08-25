/*(d) Upper triangular Matrix.*/

#include<iostream>
using namespace std;

int arr[4][4]={{1,5,6,7},{0,2,8,9},{0,0,3,10},{0,0,0,4}};
int c[]={};

int main(){
    int k=0;
    for(int i=0;i<4;i++){
        c[k++]=arr[i][i];
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            c[k++]=arr[i][j];

        }
    }
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
}