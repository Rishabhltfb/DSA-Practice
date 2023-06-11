// LINK: http://bit.ly/3IQQdrt
// DIFICULTY: MEDIUM

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

void rotateByK(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    //Write your code here
    rotateByK();
    return 0;
}