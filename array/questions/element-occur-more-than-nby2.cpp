// LINK: https://bit.ly/3GmPYTH
// APPROACH: OPTIMAL
// TECHNIQUE: Moore's Voting Algo
// TIME COMPLEXITY: O(N+N) , SPACE COMPLEXITY: O(1)
// NOTE: which ever element is not cut down by other elements till the last have the chance to occur more than n/2 times

int majorityElement(vector<int> v) {
	// Write your code here
	int ele ;
	int ctr=0;
	for(int i=0;i<v.size();i++){
		if(ctr==0){
			ele = v[i];
			ctr =1;
		}else {
			if(ele == v[i]) ctr++;
			else ctr--;
		}
	}
	// to verify
	int occurence = 0;
	for(int i=0;i<v.size();i++){
		if(v[i]==ele) occurence++;
	}
	return occurence> v.size()/2 ? ele: -1;
}