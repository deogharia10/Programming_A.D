#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is a composite number ";
            break;
        }
        else{
            cout<<" is a not composite number";
        }
    }
}