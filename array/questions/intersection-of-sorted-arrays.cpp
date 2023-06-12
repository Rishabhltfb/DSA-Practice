// LINK: http://bit.ly/3KSSx3Z
// DIFFICULTY: EASY-MEDIUM

#include <bits/stdc++.h> 

	bool search()

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> intersectionArr;
	int i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]) {
				intersectionArr.push_back(arr1[i]);
			i++;
			j++;
		}else{
			if(arr1[i]< arr2[j]){
				i++;
			}else{
				j++;
			}
		}
	}
	return intersectionArr;
}