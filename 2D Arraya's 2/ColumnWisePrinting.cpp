#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter row of matrix :";
    cin>>m;
    int n;
    cout<<"enter cols of matrix :";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

   // column wise print
    for(int j=0; j<n; j++){
       for(int i=0; i<m; i++){

            cout<<arr[i][j]<<" ";

        }
    }
    
} 