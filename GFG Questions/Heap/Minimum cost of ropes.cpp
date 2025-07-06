class Solution {
  public:
    int minCost(vector<int>& arr) {
       int cost = 0;
       if(arr.size()==1) return cost; 
       // Min heap created
       priority_queue<int,vector<int>,greater<int> >p;
       
       for(int i=0;i<arr.size();i++) p.push(arr[i]);
       
       // run the loop until the arr become a single rope
       while(p.size()>1){
           int first = p.top();
           p.pop();
           int second = p.top();
           p.pop();
           int sum = first+second;
           cost += sum;
           p.push(sum);
       }
       return cost;
    }
};
