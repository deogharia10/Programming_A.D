#include<bits/stdc++.h>
using namespace std;
int main(){
    // string str = "abirlal deogharia is at buie";
    // cout<<str.length(); // 0 to str.length()-1
    // int len = str.length();

    // push_back()

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // pop_back()

    // string s = "abirlal";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;

    // "+" operator

    // string s = "abc";
    // cout<<s<<endl;
    // string t = "def";
    // s = s+t; // OR  s = s+'def' and s = 'def'+s (append)
    // cout<<s<<endl;

    //reverse()

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);
    cout<<s<<endl;
   
}