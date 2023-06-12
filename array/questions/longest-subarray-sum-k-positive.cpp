// LINK: https://bit.ly/3GHyBOS
// DIFFICULTY: MEDIUM
// NOTE: For positive,0 and negative numbers
// TECHNIQUE: HASHING, TC: O(Nlog(M)), SC: O(M)

#include <bits/stdc++.h>

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long long, int> preSumMap; // sum -> index
    int maxLen = 0;
    long long sum = 0;
    for(int i=0; i< a.size();i++){
        sum += a[i];
        if(sum == k){
            maxLen= max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            maxLen = max(maxLen, i- preSumMap[rem]);
        }
        if(preSumMap.find(sum) == preSumMap.end()){ // to not replace the oldest store sum in case of 0's 
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

// OPTIMAL APPROACH
// TECHNIQUE: 2 POINTER APPROACH, TC: O(N) or O(2N) in worst case , SC: O(1)
// NOTE: FOR 0 + POSITIVE NUMBERS ONLY
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    // OPTIMAL FOR POSITIVE + 0
    int ptr = 0;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<a.size();i++){
        sum += a[i];
        if(sum == k){
            int len = i - ptr +1;
            maxLen = max(maxLen, len);
        }
        while(sum > k){ // can have to skip more than 1 places
            sum -= a[ptr++];
        }
        if(sum == k){
            int len = i - ptr +1;
            maxLen = max(maxLen, len);
        }
        
    }
    return maxLen;

}