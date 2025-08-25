/*5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 
c𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices, 
implement an efficient way that reduces the space requirement. 
(a) Diagonal Matrix. 
(b) Tri-diagonal Matrix. 
(c) Lower triangular Matrix. 
(d) Upper triangular Matrix. 
(e) Symmetric Matrix */

#include<iostream>
using namespace std;

int arr[3][3]={{1,0,0},{0,5,0},{0,0,9}};
int c[3]={};

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                c[i]=arr[i][j];

            
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<c[i]<<" ";
    }
}