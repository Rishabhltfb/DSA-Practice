// LINK: http://bit.ly/3yRrCOT
// DIFFICULTY: EASY-MEDIUM
// APPROACH: OPTIMAL
// TECHNIQUE: 2 POINTER & EXTRA ARRAY
// TIME COMPLEXITY: O(N) , SPACE COMPLEXITY: O(N)
// NOTE: No way to do this in-place without using extra space

vector<int> alternateNumbers(vector<int>&a) {
    int pI=0, nI = 1;
    int n = a.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ans[pI] = a[i];
            pI+=2;
        }else{
            ans[nI] = a[i];
            nI+=2;
        }
    }
    return ans;
}