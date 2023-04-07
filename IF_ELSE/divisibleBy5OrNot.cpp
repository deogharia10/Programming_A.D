//take positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"divisible by 5 ";
    }
    else {
        cout<<"not-divisible by 5 ";
    }
}