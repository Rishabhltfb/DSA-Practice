// DIFFICULTY: EASY

#include <bits/stdc++.h>

// BETTER APPROACH
// TECHNIQUE: HASHING
string read(int n, vector<int> book, int target)
{
    // Write your code here.
     unordered_map<int,int> ump;
     for(int i=0; i<n;i++) {
         int extra = target - book[i];
         if(ump.find(extra)!=ump.end()){
             return "YES";
         }
         ump[book[i]] = i;
     }
     return "NO";
}

// OPTIMAL APPROACH 
// TECHNIQUE: 2 POINTER APPROACH, TC: O(N+Nlog(N)), SC: O(1)

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(),book.end());
    int left =0, right = n-1;
    
    while(left< right){
        long sum= book[left] + book[right];
        if(sum == target) return "YES";
        else if (sum < target){
            left++;
        }else{
            right--;
        }
    }
    return "NO";
}