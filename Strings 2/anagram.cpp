// Ques : Given two strings s and t, return true if t is ananagram of s, and false otherwise. (leetcode242)//
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "physicswallah";
   string t = "phywallahsics";
   sort(s.begin(), s.end());
   sort(t.begin(), t.end());
   if(s==t) cout<<true;
   else cout<<false;  
}