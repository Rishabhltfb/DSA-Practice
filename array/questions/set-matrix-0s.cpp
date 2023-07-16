// LINK: https://bit.ly/3CukQke
// DIFFICULTY: MEDIUM
// APPROACH: OPTIMAL
// TECHNIQUE: Hashing 
// TIME COMPLEXITY: O(N^2) , SPACE COMPLEXITY: O(1)
// NOTE: We are using 1st row and 1st column to mark 0's and then converting in the below sequence...
// STEP1: Convert the inner matrix by taking ref from row 1, col 1;
// STEP2: Convert row1 then because conveting col1 first will distort the 1st element matrix[0][0];
// STEP2: Convert col1 finally and the first element in the last;

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int row1 = matrix[0][0];
	// Assigning 0 to the 1st row and column for reference
	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			if(matrix[row][col] == 0){
				if(col == 0) {
					row1= 0;
				}else{
					matrix[0][col]=0;
				}
				matrix[row][0] = 0;
				
			}
			
		}
	}
	// converting the inside matrix
	for(int row=n-1;row>=1;row--){
		for(int col=m-1;col>=1;col--){
			if(matrix[row][col]!=0 && (matrix[row][0]==0 || matrix[0][col]==0)){
				matrix[row][col] = 0;
			}
		}
	}
	// converting first row
	int row = 0;
	for(int col =m-1;col>=1;col-- ){
		if(matrix[row][col]!=0 && matrix[0][0]==0){
		matrix[row][col] = 0;
		}
	}
	// converting first col
	int col = 0;
	for(int row =n-1;row>=1;row--){
		if(matrix[row][col]!=1 && row1==0){
			matrix[row][col] =0;
		}
	}
	//converting 1st element
	if(row1 ==0 ) {
		matrix[0][0] = 0;
	}
	return matrix;
}