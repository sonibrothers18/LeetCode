//! WRONG -->
#include<iostream>
#include<algorithm>
using namespace std;

void unique(int  arr[], int size){
    sort(arr, arr+size);

    int store[size];
    int x=0, i=0, j=i, count=0;
    while(i<size && j<size){
        if(arr[i]==arr[j]){
            count++;
            j++;
        }
        else{
            i=j;
            store[x] = count;
            x++;
            count = 0;
        }
    }
    sort(store, store+x);
    for(int i=0; i<x-1; i++){
        if(store[i] == store[i+1]){
            return false;
        }
    }
    return true;
} 

int main(){

    int a[6] = {1, 2, 3,3,6, 9};
    unique(a, 6);
    
    return 0;
}