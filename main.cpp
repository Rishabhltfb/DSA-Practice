// #include <bits/stdc++.h>
#include "bits.cpp" 
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

bool isPresent(vector<ll> &arr, ll k){
    ll left = 0, right = arr.size()-1;
    while(left<= right){
        ll mid = left + (right-left)/2;
    }
    return false;
}

bool solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n-1);
    ll maxi = (n*(n+1))/2;
    bool maxCheck = true;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        if(arr[i] > maxi) {
            maxCheck = false;
        }
    }
    if(!maxCheck){
        return false;
    }
    if(n>2){
        map<ll,ll> mp;
        ll x = -1;
        ll sum = maxi;
        for(int i=0;i<n-2;i++){
            ll diff = arr[i+1] - arr[i];
            sum -= diff;
            if(n >= diff ){
                if(mp[diff]>0){
                    if(x!=-1) return false;
                    x= diff;
                }else{
                    mp[diff]++;
                }
            }else{
                if(x!=-1) return false;
                x = diff;
            }
        }
        if(x!=-1 && mp[arr[0]]!=0 ){
            return false;   
        }else if(x == -1 && mp[arr[0]!=0]){
            x= arr[0];
        }else if(x != -1 && mp[arr[0]] == 0){
            mp[arr[0]]++;
        }else if(x==-1 && mp[arr[0]==0]){
            mp[arr[0]]++;
        }
        else{
            x = sum;
        }
        ll counter = 0;
        for(int i =1 ; i<= n;i++){
            if(mp[i]>1){
                return false;
            }else if(mp[i]==0 && x!=-1){
                if(x-i<1 || x-i>n || mp[x-i]!= 0) return false;
            }else{
                counter++;
            }
        }
        if(counter<n-2 && counter>n-1) return false; 
    }
    return true;
}

int main() {
	fast_io;
    ll t =1;
    cin>>t;
    while(t--){
        bool ans = solve();
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}