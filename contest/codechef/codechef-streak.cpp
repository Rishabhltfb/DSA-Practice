// LINK: https://www.codechef.com/problems/CS2023_STK
// DIFFICULTY: EASY-MEDIUM-HARD
// APPROACH: TRY OMTIMAL ALWAYS
// TECHNIQUE: UNDEFINED
// TIME COMPLEXITY: O(UNDEFINED) , SPACE COMPLEXITY: O(UNDEFINED)
// NOTE: This is the template code

//...START BY DOING WHAT IS NECESSARY, THEN WHAT IS POSSIBLE AND SUDDENLY YOU ARE DOING THE IMPOSSIBLE...
#include <iostream>
#include <bits/stdc++.h>

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

void testCase()
{
	ll n;
	cin >> n;
	vector<long> om(n);
	vector<long> addy(n);
	for(int i=0;i<n;i++) {
	    cin>>om[i];
	}
	for(int i=0;i<n;i++) {
	    cin>>addy[i];
	}
	int Oms =0, ams=0;
	int omSt = 0,addySt=0;
	for(int i=0;i<n;i++){
	    if(om[i]>0) {
	           omSt++;
	           Oms = max(Oms, omSt);
	    }else{
	           omSt=0;
	    }
	    if(addy[i]>0) {
	           addySt++;
	           ams = max(ams, addySt);
	    }else{
	           addySt=0;
	    }
	}
	if(ams>Oms){
	   cout<<"Addy\n" ;
	}else if(ams == Oms){
	    cout<<"Draw\n";
	}else{
	    cout<<"Om\n";
	}
	
}

int main()
{
	fast_io;
	int t=1;
	cin >> t;
	while (t--)
	{
		testCase();
	}
	return 0;
}