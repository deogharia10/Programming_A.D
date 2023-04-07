#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character :";
    cin>>ch;
    int ascii =(int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"the character is lowercase alphabet";
    }
    if(ascii>=65 && ascii<=90){
        cout<<"the character is uppercase alphabet";
    }
}