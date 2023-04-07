#include<iostream>
using namespace std;
int main(){
    cout<<"enter an integer :";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"number is divisibel by 3 and 5 ";
        }
        else{
            cout<<"not matching condition";
        }
    }
    else{
        cout<<"not matching condition";
    }

}