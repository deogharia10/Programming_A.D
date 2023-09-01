#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "abcdef";
    // // s.substr(ind.len)
    // cout<<s.substr(2,2);

    // input 
    string str;
    cout<<"enter a string :";
    cin>>str;
    // abcdefgh -> n=8
    int n = str.length();
    cout<<str.substr(n/2);

}