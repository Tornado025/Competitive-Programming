#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int x=0;vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        if(k>2)cout<<"0"<<"\n";
        else{
            sort(arr.begin(),arr.end());
            int mini=arr[0];
            for(int i=1;i<n;i++){
                mini=min(mini,arr[i]-arr[i-1]);
            }
            if(k==1)cout<<mini<<"\n";
            else {
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        int c = arr[j] - arr[i];
                        int lb = lower_bound(arr.begin(), arr.end(), c) - arr.begin();
                        if (lb > 0) mini = min(mini, c - arr[lb - 1]);
                        if (lb < n) mini = min(mini, arr[lb] - c);
                    }
                }
                cout<<mini<<"\n";
            }
        }
    }
}