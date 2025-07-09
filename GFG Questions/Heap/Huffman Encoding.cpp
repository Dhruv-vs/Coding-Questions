class Solution {
  public:
  
  // created class Node
  class Node{
      public:
      int freq;
      Node* left;
      Node* right;
      
      Node(int count){
          freq = count;
          left = right = NULL;
      }
  };
  
  class compare{
      public:
      bool operator()(Node* a,Node* b){
          return a->freq>b->freq;
      }
  };
  
  void pre_order(Node* root,string s,vector<string>&huff){
      if(!root) return;
      
      if(!root->left && !root->right){
          huff.push_back(s);
          return;
      }
      // move left and add 0
      pre_order(root->left,s+'0',huff);
      // move right and add 1
      pre_order(root->right,s+'1',huff);
  }
    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        
        // min heap created in which Node value is stored
        // priority_queue<int,vector<int>,greater<int>>p; // this is for int
        
         priority_queue<Node*,vector<Node*>,compare>minheap;
         for(int i=0;i<N;i++){
             Node* ans = new Node(f[i]);
             minheap.push(ans);
         }
         
        Node* root;
        Node* min1,*min2;
        while(minheap.size()>1){
            min1 = minheap.top();
            minheap.pop();
            min2 = minheap.top();
            minheap.pop();
            
            root = new Node(min1->freq+min2->freq);
            root->left = min1;
            root->right = min2;
            minheap.push(root);
        }
        
        root = minheap.top();
        
        vector<string>huff;
        pre_order(root,"",huff);
        return huff;
        
    }
};
