class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
       vector<int>ans;
       int minCost=0,maxCost=0;
       sort(prices.begin(),prices.end());
       
       // min cost find
       int start=0,end = prices.size()-1;
       while(start<=end){
           minCost+=prices[start];
           end-=k;
           start++;
       }
       
       // max cost find
       start=prices.size()-1,end = 0;
       while(start>=end){
           maxCost+=prices[start];
           end+=k;
           start--;
       }
       
       ans.push_back(minCost);
       ans.push_back(maxCost);
       return ans;
    }
};
