#include<iostream>
using namespace std;
int main(){
    int a,b;
    int op;
    cout<<"enter the problam :";
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;
    
}