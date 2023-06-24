#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the row number :";
    cin>>x;
    int y;
    cout<<"enter the col number :";
    cin>>y;
    int arr[x][y];
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=y-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=y-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // printing tranpose
    for(int j=0; j<y; j++){
        for(int i=0; i<x; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 


}