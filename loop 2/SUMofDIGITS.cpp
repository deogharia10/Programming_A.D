#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int lastdigits = 0;
    int sum = 0;
    while(n>0){
        lastdigits = n%10;
        sum += lastdigits;
        n/=10;
    }
    cout<<sum;

}