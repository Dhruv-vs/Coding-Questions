class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
    stack<int>s;
     while(q.size()){
       s.push(q.front()); // first put in stack 
        q. pop();
    }
    while(s.size()){
       q. push(s.top()); // push in queue stack top 
        s.pop();
    }
    return q;
    }
};
