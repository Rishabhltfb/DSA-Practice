// LINK: https://bit.ly/3if2k8G
// DIFFICULTY: MEDIUM, CONFUSED FOR A LITTLE WHILE

int removeDuplicates(vector<int> &arr, int n) {
	
	int ptrIndex =0;
	for(int i = 1; i<n;i++) {
		if(arr[i] != arr[ptrIndex]){
			arr[ptrIndex+1] = arr[i];
			ptrIndex++;
		}
	}
	return ptrIndex+1;
}

