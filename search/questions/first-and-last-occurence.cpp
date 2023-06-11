// DIFFICULTY: EASY

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    auto lowerBound = lower_bound(arr.begin(), arr.end(), k);
    int lowerBoundIndex = lowerBound - arr.begin();
    if(lowerBoundIndex>n-1 || arr[lowerBoundIndex]!= k){
        return {-1,-1};
    }
    auto upperBound = upper_bound(arr.begin(), arr.end(), k);
    int upperBoundIndex = upperBound - arr.begin();
    return {lowerBoundIndex, upperBoundIndex-1};
}