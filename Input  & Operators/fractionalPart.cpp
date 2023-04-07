#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x; // x=6.1
    int y = (int)x;//y=6
    float z = (float)y; // z=6
    x = x - z;
    cout<<x;
}