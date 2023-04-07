// SP CP Problam
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the cost price :";
    int CP,SP;
    cin>>CP;

    cout<<"enter the selling price :";
    cin>>SP;

    if(SP>CP){
        cout<<"profit ="<<SP-CP;
    }
    if(CP>SP){
        cout<<"loss ="<<CP-SP;
    }
    if(CP==SP){
        cout<<"No profit and no loss";
    }
}