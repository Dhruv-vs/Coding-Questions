class Solution{
    public:
    void possible(int start,int n,int x,int total,int &count){
        if(total==n){
            count++;
            return;
        }
        if(total>n) return;
        
        int power = pow(start, x);
        if(power>n) return;
        
        possible(start+1,n,x,total,count);
        possible(start+1,n,x,total+power,count);
    }
    int numOfWays(int n, int x)
    {
        int total=0;
        int count=0;
        possible(1,n,x,0,count);
        return count;
        
        // The above code gives TLE because of recursive nature
        // Optimised DP(coming soon...)
    }
};
