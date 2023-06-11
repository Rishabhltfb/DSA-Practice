// LINK: https://bit.ly/3ZeXGrO
// DIFFICULTY: VERY EASY

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int tmp = arr[0];
    for(int i =1; i<n;i++){
        arr[i-1]= arr[i];
    }
    arr[n-1] = tmp;
    return arr;
}
