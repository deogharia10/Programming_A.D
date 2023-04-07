#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
        int a=1;
        for(int i=1; i<=n; i++){ //rule (an=a*r^n+1)
            cout<<a<<endl;
            a=a*2;
        }
        
        
}