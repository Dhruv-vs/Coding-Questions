class Solution {
public:
    int clumsy(int n) {
        stack<int>s;
        int i=0;
        s.push(n);
        n--;
        while(n){
            if(i==0){
                int num = s.top();
                s.pop();
                s.push(num*n);
            }
            else if(i==1){
                int num = s.top();
                s.pop();
                s.push(num/n);
            }
            else s.push(n);
            i=(i+1)%4;
            n--;
        }

        stack<int>ans;
        while(s.size()){
            ans.push(s.top());
            s.pop();
        }
        int sum = ans.top();
        ans.pop();
        bool flag = 0;
        while(ans.size()){
            if(flag==0){
                sum += ans.top();
                ans.pop();
                flag=1;
            }
            else{
                sum -= ans.top();
                ans.pop();
                flag=0;
            }
        }
        return sum;
    }
};
