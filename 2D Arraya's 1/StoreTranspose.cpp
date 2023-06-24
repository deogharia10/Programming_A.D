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
    // store the transpose
    int t[y][x];
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            t[i][j] = arr[j][i];
        }
    }
    // printing transpose matrix
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }


}