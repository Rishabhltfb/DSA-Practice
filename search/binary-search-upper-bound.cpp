// DIFFICULTY: EASY

// Upper Bound = index of smallest number > x 
int upperBound(vector<int> &arr, int x, int n){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]> x){
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
upperBoundIterator = upper_bound(arr,arr+n); // gives iterator using array
upperBoundIterator = upper_bound(arr+startIndex,arr+endIndex+1); // gives iterator using array
upperBoundIndex = upperBoundIterator - arr
// For Vector
upperBoundIterator = upper_bound(arr.begin(),arr.end(),x); // gives iterator using vector
upperBoundIndex = upperBoundIterator - arr.begin()
