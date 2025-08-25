/*(d) Write a program to sort the strings in alphabetical order. */

#include<iostream>
#include<algorithm>
using namespace std;

string s="BEACFD";

int main(){
    sort(s.begin(),s.end());
    cout<<s;
}