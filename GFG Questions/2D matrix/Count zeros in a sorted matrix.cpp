class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    //First Method O(N*N)
// 	    int count=0;
// 		for(int i=0;i<A.size();i++){
// 		    for(int j=0;j<A[0].size();j++){
// 		        if(A[i][j]==0) count++;
// 		    }
// 		}
// 		return count;

      int count=0;
      int row=A.size(),col = A[0].size();
      int i=0,j=col-1;
      while(i<row && j>=0){
          while(j>=0 && A[i][j]==1) j--;
          
          count+=j+1;
          i++;
      }
      return count;
	}
};
