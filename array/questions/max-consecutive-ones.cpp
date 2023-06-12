// LINK: http://bit.ly/3ZFZji5
// DIFFICULTY: EASY

#include <bits/stdc++.h> 
int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int ans = 0;
    int counter = 0;
    for(int i = 0; i< arr.size();i++) {
        if(arr[i]==1){
            counter++;
        }else{
            counter = 0;
        }   
        ans = max(ans, counter);
    }
    return ans;
}