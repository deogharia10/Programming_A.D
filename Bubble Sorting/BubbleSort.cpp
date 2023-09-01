#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[6] = {5,4,6,3,2,1};
   int n = 6;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

//    // bubble sort
//    for(int i=0; i<n-1; i++){
//         // treverse
//         for(int j=0; j<n-1-i; j++){ // T.C-> O(n^2)
//             if(arr[j]>arr[j+1]){ // swap
//                 swap(arr[j],arr[j+1]);

//             }
//         }
//    }
// bubble sort optimised
   for(int i=0; i<n-1; i++){
        // treverse
        bool flag = true;
        for(int j=0; j<n-1-i; j++){ // T.C-> O(n^2)
            if(arr[j]>arr[j+1]){ // swap
                swap(arr[j],arr[j+1]);
                flag = false;

            }
        }
        if(flag==true){ // swap didn't happen
            break;
        }
   }
   cout<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

}