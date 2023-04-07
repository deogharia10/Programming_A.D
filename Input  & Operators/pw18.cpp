// what is the result of the following code fragment
#include<iostream>
using namespace std;
int main(){
    // bool a = false;
    // bool b = false;
    // bool c = true;
    bool a = 2;
    bool b = 3;
    bool c = 3;
    cout<<(a==b==c);//left to right
}