int recursiveSearch(vector<int>& nums, int low, int high, int target){
  if(low>high) return -1; // base case
    int mid = (low+high)/2;
    if(nums[mid] == target) return mid;
    else if(nums[mid] > target) return recursiveSearch(nums,  low,  mid-1,  target);
    else return recursiveSearch(nums,  mid+1,  high,  target);
}
