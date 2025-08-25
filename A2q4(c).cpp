/*(c) Write a program to delete all the vowels from the string. */

#include<iostream>
using namespace std;
string s="ABCDEF";
string r="";

int main(){
    for(int i=0;i<6;i++){
        char ch=s[i];
        if(ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' && ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
            r+=ch;

        }
    }
    cout<<r;
    return 0;
}