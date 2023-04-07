#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter base :";
    cin>>a;
    cout<<"enter exponent :";
    cin>>b;
    int power = 1;
    for(int i=1; i<=b;i++){
        power = power*a;
    }
    cout<<a<<" raised to the power "<<b<<" is "<<power;
    

}