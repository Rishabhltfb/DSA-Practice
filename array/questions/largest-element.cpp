// Link: https://takeuforward.org/data-structu...
// DIFFICULTY: VERY EASY

#include <bits/stdc++.h> 
int largestElementInArray(vector<int> &arr, int n) {
    // Write your code here.
    long long largest = arr[0];
    for(long i=0; i<n; i++ ){
        if(arr[i]> largest) {
            largest = arr[i];
        }
    }
    return largest;
}

