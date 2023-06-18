
// LINK: https://bit.ly/3GiWSJP
// DIFFICULTY: MEDIUM
// APPROACH: OPTIMAL
// TECHNIQUE: NAME HERE
// TIME COMPLEXITY: O(N + 2N) , SPACE COMPLEXITY: O(N)
// NOTE: Using unordered set for quick find operations

#include <bits/stdc++.h>

int longestSuccessiveElements(vector<int>&a) {
    unordered_set<int> st;
    int n = a.size();
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int longestCount = 0;
    for(auto it : st){
        
        if(st.find(it-1) == st.end()){
            int x = it;
            int cnt = 1;
            while(st.find(x+1)!= st.end()){
                cnt++;
                x++;
            }
            longestCount = max(longestCount, cnt);
        }
    }
    return longestCount;
}

// TECHNIQUE: BETTER APPROACH
// TIME COMPLEXITY: O(NLOGN +N) , SPACE COMPLEXITY: O(1)
// NOTE: Using unordered set for quick find operations

int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(),a.end());
    int longest = 1;
    int currentCount = 1;
    int lastElement = a[0];
    for(int i=1;i<a.size();i++) {
        if(a[i]== lastElement+1){
            currentCount++;
            lastElement = a[i];
        }else if(a[i]!= lastElement){
            lastElement = a[i];
            currentCount = 1;
        }
        longest = max(currentCount,longest);
    }
    return longest;
}