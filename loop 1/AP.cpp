#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    // for(int i=1; i<=2*n-1; i+=2){      (rule -> an=a+(n-1)d)
    //     cout<<i<<endl;
    // }
        int a=4;
        for(int i=1; i<=n; i++){
            cout<<a<<endl;
            a=a+3;
        }
        
        
}