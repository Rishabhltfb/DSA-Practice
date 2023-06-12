// LINK: http://bit.ly/3IQQdrt
// DIFFICULTY: MEDIUM
// NOTE: Right rotate by k = Left rotate by N-k

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

    void reverse(int* arr,int start,int end ){
        while(start<=end){
            int tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
    }

void rightRotateByK(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    k = k%n;
    k = n-k; // right rotate by k = left rotate by n-k
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    //Write your code here
    rightRotateByK();
    return 0;
}