// LINK: https://bit.ly/3GJie4l
// DIFFICULTY: EASY

int getSecondLargest(int n, vector<int> a) {
    int largest = a[0];
    int secondLargest = -1;
    for(int i=1;i<n;i++){
        if(a[i] > secondLargest){
            secondLargest = a[i];
        }
        if(a[i]> largest){
            secondLargest = largest;
            largest = a[i];
        }
    }
    return secondLargest;
}

int getSecondSmallest(int n, vector<int> a) {
    int smallest = a[0];
    int secondSmallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i] < secondSmallest){
            secondSmallest = a[i];
        }
        if(a[i]< smallest){
            secondSmallest = smallest;
            smallest = a[i];
        }
    }
    return secondSmallest;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int secondLargest = getSecondLargest(n, a);
    int secondSmallest = getSecondSmallest(n,a);
    return {secondLargest, secondSmallest};
}
