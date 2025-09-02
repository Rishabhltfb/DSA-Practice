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

// it ends at tile with index 𝑛;
// p is divisible by 𝑘 -> p = k * x
// the path is divided into blocks of length exactly 𝑘 each;
// tiles in each block have the same colour, the colors in adjacent blocks are not necessarily different.
bool solve(string &s1, string &s2){
    cout<< s1 << "\n" << s2 << endl;
    ll len = s1.size();
    int index = -1;

    fo(i, 0, len){
        if(s1[i] == s2[0] && s1[(i+1)%len] == s2[1]){
            index = i;
            break;
        }
    }

    fo(i, 0, len){
        if(s1[i] != s2[index + i]) return false;
    }

    return true;
}

int main() {
    clock_t start, end;
    start = clock();
	fast_io;
    ll t =1;
    // cin>>t;
    string s1, s2;
    cin >> s1 >> s2;
    while(t--){
        bool isRotation = solve(s1, s2);
        cout<< (isRotation ? "true" : "false") <<endl;
    }
    end = clock();
    double time_taken_ms = (double)(end - start) * 1000.0 / CLOCKS_PER_SEC;
    cout << "\nTime taken by the program is: " << time_taken_ms << " ms" << endl;
    return 0;
}