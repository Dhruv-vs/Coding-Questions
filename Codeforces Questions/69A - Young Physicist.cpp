#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int> v(n*3);
    for(int i=0;i<n*3;i++){
        cin>>v[i];
    }
    for(int i=0;i<n*3-2;i+=3){
        sum+=v[i];
    }
    if(sum!=0){
        cout<<"NO";
        return 0;
    };
    for(int i=1;i<n*3-1;i+=3){
        sum+=v[i];
    }
    if(sum!=0){
        cout<<"NO";
        return 0;
    };
    for(int i=2;i<n*3;i+=3){
        sum+=v[i];
    }
    if(sum!=0){
        cout<<"NO";
        return 0;
    };
    cout<<"YES";
}
