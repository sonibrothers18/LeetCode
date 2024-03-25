//! Square root using binary search

#include<iostream>
using namespace std;

long long int sqRoot(int target){
    
    int start = 0;
    int end = target;
    long long int mid = start + (end-start)/2;
    long long int ans = -1;

    while(start <= end){
    long long int midSquare = mid * mid;
        if(midSquare == target){
            return mid;
        }
        else if(midSquare < target){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    cout<<sqRoot(8);
    
    return 0;
}

// !--------------------------------------------------------------------

// long long int sqRoot(int target){
    
//     int start = 0;
//     int end = target;
//     long long int mid = start + (end-start)/2;
//     long long int ans = -1;

//     while(start <= end){
//     long long int midSquare = mid * mid;
//         if(midSquare == target){
//             return mid;
//         }
//         else if(midSquare < target){
//             ans = mid;
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return ans;
// }
// class Solution {
// public:
//     int mySqrt(int x) {
//         return sqRoot(x);
//     }
// };