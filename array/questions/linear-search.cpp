// LINK: https://bit.ly/3XbsF6k
// DIFICULTY: VERY EASY

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i =0; i <n;i++){
        if(arr[i]==num) return i;
    }
    return -1;
}

