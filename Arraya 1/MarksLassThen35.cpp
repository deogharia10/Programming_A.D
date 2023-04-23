#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of student :";
    cin>>n;
    int marks[9]; //0 TO n-1
    cout<<"enter the marsk :";
    //input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];

    }

    for(int i=0; i<=n-1; i++){
        if (marks[i]<35) cout<<i<<" ";
    }
}