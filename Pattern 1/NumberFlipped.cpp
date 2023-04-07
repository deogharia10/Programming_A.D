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
        //stars / number
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
}