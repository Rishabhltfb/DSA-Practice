// LINK: https://bit.ly/3QiQ830
// DIFFICULTY: EASY
// APPROACH: OPTIMAL
// TECHNIQUE: Iterate from the back and store max
// TIME COMPLEXITY: O(N) , SPACE COMPLEXITY: O(1)
// NOTE: None

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    long currMax = -1;
    vector<int> ans;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]> currMax){
            currMax = a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}