#include<iostream>
using namespace std;
int main(){
    cout<<"enter a three :";
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"three digit number";
    }
    else{
        cout<<"not a three digit number";
    }
}