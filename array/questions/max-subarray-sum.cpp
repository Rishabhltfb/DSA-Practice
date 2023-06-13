// LINK: https://bit.ly/3QhMl6j
// DIFFICULTY: MEDIUM
// APPROACH: OPTIMAL
// TECHNIQUE: Kadane's Algo
// TIME COMPLEXITY: O(N) , SPACE COMPLEXITY: O(1)
// NOTE: Ex-take care of negative numbers


#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = LONG_MIN;
    long long sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum>maxSum){
            maxSum = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }

    return maxSum < 0 ? 0: maxSum;
}