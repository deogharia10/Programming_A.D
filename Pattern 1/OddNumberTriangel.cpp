#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows :";
    cin>>n;
    // for(int i=1;i<=2*n-1;i+=2){

    //      cout<<i;
    // }
    for(int i=1;i<=n;i++){
        //first 'i' odd number
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }
}