#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the row/col number :";
    cin>>x;
    int arr[x][x];
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=x-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=x-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for(int i=0; i<=x-1; i++){
        for(int j=i+1; j<=x-1; j++){
            // swapping of i,j and j,i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        
    }
    

    //print
    for(int i=0; i<=x-1; i++){
        for(int j=0; j<=x-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}