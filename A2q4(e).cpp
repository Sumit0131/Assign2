/*(e) Write a program to convert a character from uppercase to lowercase.*/
#include<iostream>
#include<string>
using namespace std;

string a="abcdef";

int main(){
    for(int i=0;i<a.length();i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]+('A'-'a');
        }
    }
cout<<a;
return 0;
}
