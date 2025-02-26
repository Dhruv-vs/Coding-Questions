class Solution {
  public:
    void possible(vector<int>arr,int size,int index,int target,int sum,vector<int>ans,vector<vector<int>> &container){
        if(index == size){
            if(sum==target){
                container.push_back(ans);
            }
            return;
        }
        if(sum>target) return;
        
        possible(arr,size,index+1,target,sum,ans,container); //not taken
        ans.push_back(arr[index]);
        possible(arr,size,index,target,sum+arr[index],ans,container); //taken
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        int sum = 0;
        int n = arr.size();
        vector<int>ans;
        vector<vector<int> >container;
        possible(arr,n,0,target,sum,ans,container);
        return container;
    }
};
