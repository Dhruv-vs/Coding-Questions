class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        int front=0,rear=0;
        int n = gas.size();
        int petrol = 0;
        while(front<n){
            petrol += (gas[rear] - cost[rear]);
            
            if(petrol<0){
                if(rear<front) return -1;
                front = rear+1;
                rear=front;
                petrol = 0;
            }
            else{
                rear = (rear+1)%n;
                if(rear==front) return front;
            }
        }
        return -1;
    }
};
