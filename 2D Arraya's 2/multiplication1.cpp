#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row no. of first matrix :"<<endl;
    cin>>m;
    int n;
    cout<<"enter the col no. of first matrix :"<<endl;
    cin>>n;

    int p;
    cout<<"enter the row no. of second matrix :"<<endl;
    cin>>p;
    int q;
    cout<<"enter the col no. of second matrix :"<<endl;
    cin>>q;

    if(n==q){
        int a[m][n];
        int b[p][q];
        cout<<"enter element in first matrix :"<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        cout<<"enter element in second matrix :"<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        // resultant matrix
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<p; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrises can't be multiplied"<<endl;
    }


}
