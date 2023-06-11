// DIFFICULTY: EASY

// Lower Bound = index of smallest number >= x 
int lowerBound(vector<int> arr, int n, int x) {
	int low = 0, high = n-1;
	int ans = n;

	while(low <=high){
		int mid = low + (high-low)/2;
		if(arr[mid] >=x){
			ans = mid;
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ans;
}

// By using library
// For Array
int startIndex = a, endIndex = b; 
lowerBoundIterator = lower_bound(arr,arr+n); // gives iterator using array
lowerBoundIterator = lower_bound(arr+startIndex,arr+endIndex+1); // gives iterator using array
lowerBoundIndex = lowerBoundIterator - arr
// For Vector
lowerBoundIterator = lower_bound(arr.begin(),arr.end(),x); // gives iterator using vector
lowerBoundIndex = lowerBoundIterator - arr.begin()
