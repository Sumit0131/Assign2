/*(e) Symmetric Matrix */
#include<iostream>
using namespace std;

int arr[3][3]={{4,2,1},{2,3,9},{1,9,5}};

int c[]={};
int main(){
    int k=0;
    for(int i=0;i<3;i++){
        c[k++]=arr[i][i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            c[k++]=arr[j][i];

        }
        
    }
    for(int i=0;i<6;i++){
        cout<<c[i]<<" ";
    }
}
