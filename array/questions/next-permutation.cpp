// LINK: https://bit.ly/3WOGkjH
// DIFFICULTY: MEDIUM
// APPROACH: OPTIMAL
// TECHNIQUE: Longer Prefix Match Algo
// TIME COMPLEXITY: O(N+N+N) , SPACE COMPLEXITY: O(1)
// NOTE: // Follow 3 steps:
// Step1: Find the breakpoint using Longer prefix match, a[i]<a[i+1];
// Step2: Find the number just > a[index] but the smallest among others to swap
// Step3: reverse the array from index+1 to last index because this one was already in descending order

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size();
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i] < A[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        // Last permutation case, so start from 1st again
        reverse(A.begin(), A.end());
        return A;
    }
    for(int i=n-1;i>=0;i--){
        if(A[index] < A[i]){
            swap(A[index],A[i]);
            reverse(A.begin()+index+1, A.end());
            break;
        }
    }
    return A;
    
}