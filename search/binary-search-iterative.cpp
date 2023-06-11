// DIFFICULTY: EASY

int binarySearch(vector<int>& nums, int target) {
    // Write Your Code Here
    int low = 0, high = nums.size()-1;
    while (low<=high){
        // int mid = (low +high)/2; // have overflow issue in edge cases
        int mid = low + (high-low)/2; // to prevent overflow condition because int has limit to store a max value
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] <target){
            low = mid+1;
        }else{
            high= mid- 1;
        }
    }
    return -1;
}