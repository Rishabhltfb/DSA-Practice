#include <bits/stdc++.h>

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	auto lowerBoundIterator = lower_bound(arr.begin(), arr.end(), x);
	int lowerBoundIndex = lowerBoundIterator - arr.begin();
	if(lowerBoundIndex == n || arr[lowerBoundIndex]!=x) return 0;
	auto upperBoundIterator = upper_bound(arr.begin(), arr.end(), x);
	int upperBoundIndex = upperBoundIterator - arr.begin();
	return upperBoundIndex - lowerBoundIndex;
}
