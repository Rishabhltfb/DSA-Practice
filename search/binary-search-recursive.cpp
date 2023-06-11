// DIFFICULTY: EASY

int recursiveSearch(vector<int>& nums, int low, int high, int target){
  if(low>high) return -1; // base case
    // int mid = (low+high)/2;  // have overflow issue in edge cases
     int mid = low + (high-low)/2; // to prevent overflow condition because int has limit to store a max value  
    if(nums[mid] == target) return mid;
    else if(nums[mid] > target) return recursiveSearch(nums,  low,  mid-1,  target);
    else return recursiveSearch(nums,  mid+1,  high,  target);
}
