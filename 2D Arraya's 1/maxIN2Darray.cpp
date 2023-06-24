#include<iostream>
#include<climits>
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
    // MAX
    int max = INT_MAX;
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=y-1; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }    
    }
    cout<<max;
 


} // not run code check