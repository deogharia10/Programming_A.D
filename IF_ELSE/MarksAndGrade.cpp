#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the marks :";
    cin>>n;
    if(n>=91 && n<=100){
        cout<<"excellent";
    }
    if(n>=81 && n<=90){
        cout<<"very good";
    }
    if(n>=71 && n<=80){
        cout<<"good";
    }
    if(n>=61 && n<=70){
        cout<<"can do better";
    }
    if(n>=51 && n<=60){
        cout<<"average";
    }
    if(n>=40 && n<=50){
        cout<<"bellow average";
    }
    if(n<40){
        cout<<"fail";
    }


}