// Link: https://bit.ly/3MCdLTY
// DIFFICULTY: MEDIUM

// Edge Case: [3,3,1,3,3,3,3,3](Duplicates exists)  here you won't be able to apply binary untill you get rid of condition
// arr[low] = arr[mid] = arr[high]

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int low = 0, high = A.size()-1;
    while(low<=high){
        int mid = low + (high- low)/2;
        int midEle = A[mid];
        int lowEle = A[low];
        int highEle = A[high];
        bool leftSorted= lowEle <= midEle;
        bool goRight= false;
        if(midEle == lowEle && midEle == highEle && midEle !=key){
            low++;
            high--;
            continue;
        }
        if(midEle == key) return true;
        if(leftSorted){
            if(lowEle<= key && key<=midEle){
                goRight= false;
            }else{
                goRight = true;
            }
        }else{
if(midEle<= key && key<=highEle){
                goRight= true;
            }else{
                goRight = false;
            }
        }
        if(goRight){
            low = mid+1;
        }else{
            high= mid-1;
        }
    }
    return false;
}
