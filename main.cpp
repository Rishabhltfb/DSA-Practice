// #include <bits/stdc++.h>
#include "./lib/bits.cpp" 
using namespace std;


typedef long long ll;

#define INF LONG_MAX
#define mod 1e9 + 7
#define fo(i, a, b) for (int i = a; i < b; i++)
#define fob(i, a, b) for (int i = a; i >= b; i--)
#define sqr(x) ((ll)(x) * (x))
#define p(a) cout << a << "\n"
#define fast_io              \
	ios::sync_with_stdio(0); \
	cin.tie(0);


int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int left =0, right = n-1;
	int lowerBound = n;
	while(left<=right){
		int mid = left + (right - left)/2;
		int curr = arr[mid];
		if(curr <= x ){
			lowerBound = mid;
			left =mid+1;
		} else{
			right = mid-1;
		}
	}
	return lowerBound;
}

int upperBound(vector<int> &arr,  int n,int x){
	// Write your code here.	
	int left =0, right = n-1;
	int upperBound = n;
	while(left<=right){
		int mid = left + (right - left)/2;
		int curr = arr[mid];
		if(curr <= x){
			left = mid+1;
		}else{
			upperBound = mid;
			right = mid -1;
		}
	}
	return upperBound;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int lbIndex = lowerBound(arr,n,k);
    int ubIndex = upperBound(arr,n,k);
    cout<<lbIndex<<"\t"<<ubIndex<<"\n";
    if(ubIndex - lbIndex == 1 ) return {-1,-1};

    return {lbIndex, ubIndex-1};
}

int main() {
	fast_io;
    ll t =1;
    // cin>>t;
    // clock_t start, end;
    // start = clock();
    vector<int> arr = {1,3,3,5};
    while(t--){
        firstAndLastPosition(arr, 4,2);
    }
    // end = clock();
    // double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    // cout << "\nTime taken by the program is: " << time_taken << " seconds" << endl;
    return 0;
}

