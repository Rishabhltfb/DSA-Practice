#include "bits.cpp"
// #include <iostream>

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


bool validIndex(int i,int n){
    if(i>=0 && i<n){
        return true;
    }
    return false;
}

int pass(int index, map<int,int>& mp,vector<int> times,int n,int startI){
	if(validIndex(index,n)){
		if(mp[index]!=-2){
			return mp[index];
		}else{
		    int ans;
			int lI = index - (times[index]);
			int rI = index + (times[index]);
			int ansL = -1,ansR=-1;
			if(validIndex(lI,n) && lI!=startI ){
			    mp[lI] = pass(lI,mp,times,n,startI);
			    ansL = mp[lI];
			}
			if(validIndex(rI,n)&&rI!=startI){
			    mp[rI] =pass(rI,mp,times,n,startI);
			    ansR=mp[rI];
			}
			if(ansL!=-1 && ansR!=-1){
				ans = 1+min(ansL,ansR);
				ans = ansR;
			}else if(ansR==-1 && ansL == -1){
				ans = -1;
			}else if(ansR==-1){
			    ans = 1+ ansL;
			}else{
			    ans = 1+ ansR;
			}
			mp[index] = ans;
			return ans;
		}
	}
	return -1;
}

vector<int> solve(int n,vector<int> times)
{
	vector<int> ans(n);
	map<int,int> mp;
	for(int i=0;i<n-1;i++){
		mp[i]=-2;
	}
	mp[n-1] =0;
	for(int i=0;i<n-1;i++){
		ans[i] = pass(i,mp,times,n,i);
	}
	ans[n-1]=0;
	return ans;
}

int main()
{
// 	fast_io;
	vector<int> x = {3,4,2,1};
	vector<int> ans = solve(x.size(),x);
	for(auto it: ans){
		cout<<it<<"\n";
	}

	return 0;
}
