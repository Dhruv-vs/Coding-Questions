class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        dq.push_back(x);
        
    }

    void ppb(deque<int>& dq) {
        if (!dq.empty()) dq.pop_back();
        else return;
    }

        
    int front_dq(deque<int>& dq) {
        if(!dq.empty()) return dq.front();
        else return -1;
    }
        

    void pf(deque<int>& dq, int x) {
        dq.push_front(x);
    }
};
