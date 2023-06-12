// LINK: https://bit.ly/3CsgYAa
// APPROACH: OPTIMAL 
// TECHNIQUE: DUTCH NATIONAL FLAG ALGO
// TIME COMPLEXITY: O(N) , SPACE COMPLEXITY: O(1)
// NOTE: Take extra care of which pointer to move at what time
// COMMENT: if swaping from back, that mean replacing by known so we can move mid ptr forward, but 
// when swapping from back, we are bringing unknown to mid, so we can move forward mid.


// 0-> low-1 (0's) low->mid-1 (1's)  mid->high unsorted elements, high+1->n-1 (2's)
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
   int low=0, mid=0, high = n-1;
   while(high >= mid){
       if(arr[mid]==0){
           swap(arr[low++], arr[mid++]);
       }else if(arr[mid] ==1){
           mid++;
       }else{
           swap(arr[mid], arr[high--]);
       }
   }
}
