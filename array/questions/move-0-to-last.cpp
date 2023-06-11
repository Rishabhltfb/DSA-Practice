// LINK: https://bit.ly/3XbsF6k
// DIFICULTY: EASY-MEDIUM

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int moveIndex = 0;
    for(int i=0; i<n; i++){
        if(a[i]==0){
            moveIndex++;
        }else{
            a[i-moveIndex] = a[i];
        }
    }
    for(int i = n-1; i>=0;i--){
        if(moveIndex>0){
            a[i] = 0;
            moveIndex--;
        }else{
            break;
        }
    }
    return a;
}
