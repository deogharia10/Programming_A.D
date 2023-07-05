#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v(5,2);
    // int arr[3][4];
    vector< vector<int> > v(3, vector<int> (4,20));
    // cout<<v.size()<<endl;
    // cout<<v[2][2];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[1].size();


}