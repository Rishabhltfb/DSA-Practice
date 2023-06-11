// Link: https://bit.ly/41My2dR
// Youtube: https://www.youtube.com/watch?v=nhEMDKMB44g&list=PLgUwDviBIf0pMFMWuuvDNMAkoQFi-h0ZF&index=7
// Note: All element distinct

int findMin(vector<int>& arr)
{
	// Write your code here. 
	int low = 0, high = arr.size()-1;
	int ans = arr[0];
	while(low<=high){
		int mid = low + (high-low)/2;
		int midEle = arr[mid];
		int lowEle = arr[low];
		int highEle = arr[high];
        if(lowEle<=highEle){
            // complete search space is sorted
            ans = min(ans, lowEle);
            break;
        }
		bool leftSorted = lowEle<=midEle;
		bool goRight = false;
		if(leftSorted){
			ans = min(ans, lowEle);
			goRight = true;
		}else{
			goRight = false;
			ans = min(ans, midEle);
		}
		if(goRight){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return ans;
}