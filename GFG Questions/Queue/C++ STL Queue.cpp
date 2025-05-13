/*You are required to complete below methods*/

/*inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    q.push(x);
}

/*pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    if(!q.empty()){
        int data = q.front();
        q.pop();
        return data;
    } 
    return -1;
}

/*returns the size of the queue q */
    
int getSize(queue<int> &q) {
    return q.size();
}

    
/*returns the last element of the queue */
int getBack(queue<int> &q) {
    if(!q.empty()) return q.back();
    else return -1;
}
    

/*returns the first element of the queue */
int getFront(queue<int> &q) {
   if(!q.empty()) return q.front();
   else return -1;
}
