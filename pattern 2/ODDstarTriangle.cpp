#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines :";
    cin>>n;
    // no of stars = n + 1 - i
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}