// Link: https://bit.ly/3OmIp5d
// DIFFICULTY: MEDIUM

int searchInRotatedSortedArray(vector<int>& arr, int n, int k)
{
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int midElement = arr[mid];
        int lowElement = arr[low];
        int highElement = arr[high];
        bool leftSorted = lowElement<= midElement;
        bool goRight = false;
        if(midElement==k) return mid;
        if(leftSorted ){
            if(lowElement<= k && k<=midElement){
                goRight = false;
            }else{
                goRight= true;
            }
        }else{
            if(midElement<=k && k<=highElement){
                goRight = true;
            }else{
                goRight= false;
            }
        }
        if(goRight){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}
