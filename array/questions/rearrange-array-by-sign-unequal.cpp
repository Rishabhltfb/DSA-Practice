// LINK: https://bit.ly/3QloXof
// DIFFICULTY: EASY-MEDIUM
// APPROACH: BRUTE FORCE
// TECHNIQUE: 2 Array
// TIME COMPLEXITY: O(N+N/2) , SPACE COMPLEXITY: O(N)
// NOTE: No way to do this in-place without using extra space


vector<int> alternateNumbers(vector<int>&a) {
    
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<a.size();i++){
        if(a[i]> 0){
            pos.push_back(a[i]);
        }else{
            neg.push_back(a[i]);
        }
    }

    if(pos.size()> neg.size()){
        for(int i=0; i<neg.size();i++){
            a[2*i] = pos[i]; 
            a[2*i+1] = neg[i]; 
        }
        int index = 2*neg.size()l
        for(int i=neg.size(); i<a.size();i++){
            a[index] = pos[i];
            index++;
        }
    }else{
f       for(int i=0; i<pos.size();i++){
            a[2*i] = pos[i]; 
            a[2*i+1] = neg[i]; 
        }
        int index = 2*pos.size()l
        for(int i=pos.size(); i<a.size();i++){
            a[index] = neg[i];
            index++;
        }
    }

    return a;
}