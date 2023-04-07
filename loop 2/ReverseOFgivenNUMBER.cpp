#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int lastdigits = 0;
    int R = 0;
    while(n>0){
        R = R*10;
        lastdigits = n%10;
        R += lastdigits;
        n/=10;
    }
    cout<<R;

}