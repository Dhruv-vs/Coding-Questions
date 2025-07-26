class Solution {
  public:
    vector<int> findMajority(vector<int>& nums) {
        int cand1=0 , cand2=0;
        int count1=0, count2=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num==cand1)
            count1++;
            else if(num==cand2)
            count2++;
            else if(count1==0){
                cand1 = num;
                count1 = 1;
            }
            else if(count2==0){
                cand2 = num;
                count2 = 1;
            }
            else{
            count1--;
            count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(cand1==nums[i]){
                 count1++;
            }
            else if(cand2==nums[i]){ 
                count2++;
            }
        }
        vector<int>result;
        if(count1>n/3){
        result.push_back(cand1);
        }
        if(count2>n/3){
        result.push_back(cand2);
        }
        
        sort(result.begin(),result.end());
        return result;
    }
};
