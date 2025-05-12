/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
void QueueStack ::push(int x) {
    if(q1.empty()){
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    else{
      q2.push(x);
      while(!q1.empty()){
          q2.push(q1.front());
          q1.pop();
      }
    }
}

int QueueStack ::pop() {
    if(q1.empty() && q2.empty()) return -1;
    
    if(!q1.empty()){
        int data = q1.front();
        q1.pop();
        return data;
    }
    else{
        int data = q2.front();
        q2.pop();
        return data;
    }
}
