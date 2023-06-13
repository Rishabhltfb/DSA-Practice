// LINK: https://bit.ly/3rN7GIL
// DIFFICULTY: EASY
// APPROACH: OPTIMAL
// TECHNIQUE: STORE MIN_PRICE & MAX_PROFIT
// TIME COMPLEXITY: O(N) , SPACE COMPLEXITY: O(1)
// NOTE: None

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int currMin = prices[0];
    int maxProfit = -1;
    for(int i=1;i<prices.size();i++){
        int currProfit = prices[i] - currMin;
        if(currProfit> maxProfit){
            maxProfit = currProfit;
        }
        if(prices[i] <currMin) {
            currMin = prices[i];
        }
    }

    return maxProfit< 0? 0: maxProfit;

}