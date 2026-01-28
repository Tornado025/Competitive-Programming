#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sum+=x;
        pq.push(x);
        while(sum<0){
            sum-=pq.top();pq.pop();
        }
    }
    cout<<pq.size()<<"\n";
    return 0;
}