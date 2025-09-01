#include<iostream>
using namespace std;

int A[4][4]={{1,0,0,2},{0,0,3,0},{5,0,1,0},{0,9,7,0}};
int s[100][3]={{4,4,7}};
int k=1;
int t[100][3];


int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(A[i][j]!=0){
            s[k][0]=i;
            s[k][1]=j;
            s[k][2]=A[i][j];
            k++;
            }
        }
    }
    /*for(int i=0;i<7;i++){
        for(int j=0;j<3;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    int idx=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            if(s[j][1]==i){
                
                t[idx][0]=s[j][1];
                t[idx][1]=s[j][0];
                t[idx][2]=s[j][2];
                
                
                idx++;
            }
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
        
}
return 0;
}
