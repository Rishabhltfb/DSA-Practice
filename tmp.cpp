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

// it ends at tile with index 𝑛;
// p is divisible by 𝑘 -> p = k * x
// the path is divided into blocks of length exactly 𝑘 each;
// tiles in each block have the same colour, the colors in adjacent blocks are not necessarily different.
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> colors(n);
    for(int i=0;i<n;i++){
        cin>>colors[i];
    }

}

int main() {
	fast_io;
    ll t =1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}