class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
    //   priority_queue<int>p;
    //   for(int i=0;i<arr.size();i++) p.push(arr[i]);
       
    //   vector<int>ans;
    //   while(k--){
    //       ans.push_back(p.top());
    //       p.pop();
    //   }
    //   return ans;
    
    // second method 
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int> >p;
    
    for(int i=0;i<k;i++) p.push(arr[i]);
    
    for(int i=k;i<arr.size();i++){
        // if the coming element is greater then top then pop the top and push the coming element
        if(arr[i]>p.top()){
            p.pop();
            p.push(arr[i]);
        }
    }
    while(!p.empty()){
        ans.push_back(p.top());
        p.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
