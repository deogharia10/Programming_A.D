#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows :";
    cin>>n;
    // no of stars = n + 1 - i
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1; k<=n; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}