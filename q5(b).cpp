/*(b) Tri-diagonal Matrix.*/
#include<iostream>
using namespace std;

int arr[4][4]={{1,11,0,0},{9,2,8,0},{0,10,3,5},{0,0,7,4}};
int c[]={};


int main(){
    int k=0;
    for(int i=0;i<4;i++){
        c[k++]=arr[i][i];
    }
    for(int i=0;i<4;i++){
        c[k++]=arr[i][i+1];
    }
    for(int i=0;i<4;i++){
        c[k++]=arr[i+1][i];
    }

    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
}