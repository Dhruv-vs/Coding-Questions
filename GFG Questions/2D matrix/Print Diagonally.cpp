class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
	    vector<int>ans;
		int col=0;
		while(col<N){
		    int i=0,j=col;
		    while(j>=0){
		        ans.push_back(A[i][j]);
		        i++,j--;
		    }
		    col++;
		}
		
		int row=1;
		while(row<N){
		    int i=row,j=N-1;
		    while(i<N){
		        ans.push_back(A[i][j]);
		        i++,j--;
		    }
		    row++;
		}
		return ans;
	}

};
