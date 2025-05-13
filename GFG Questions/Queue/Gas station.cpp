/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // int front=0,rear=0;
        // int n = gas.size();
        // int petrol = 0;
        // while(front<n){
        //     petrol += (gas[rear] - cost[rear]);
            
        //     if(petrol<0){
        //         if(rear<front) return -1;
        //         front = rear+1;
        //         rear=front;
        //         petrol = 0;
        //     }
        //     else{
        //         rear = (rear+1)%n;
        //         if(rear==front) return front;
        //     }
        // }
        // return -1;
        
        // more optimised 
        
        int balance=0,deficient=0,start=0;
        int n = gas.size();
        for(int i=0;i<n;i++){
            balance += (gas[i]-cost[i]);
            
            if(balance<0){
                deficient+=balance;
                balance=0;
                start=i+1;
            }
        }
        if(balance+deficient >=0) return start;
        else return -1;
    }
};
