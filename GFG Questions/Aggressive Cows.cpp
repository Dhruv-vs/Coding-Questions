// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int start = 1; // Minimum possible distance
        int end = stalls[n-1] - stalls[0]; // Maximum possible distance
        int mid;
        int result = 0;
        
        while(start<=end){
            mid = (start+end)/2;
            
            int count=1,lastPos = stalls[0];
            for(int i=0;i<n;i++){
                if(stalls[i]-lastPos>=mid){ //if valid
                    count++;
                    lastPos=stalls[i];
                }
                if(count==k) break;
            }
            if(count==k){
                result = mid;
                start=mid+1; //to search more max value
            }else
            end=mid-1;
        }
        return result;
    }
};
