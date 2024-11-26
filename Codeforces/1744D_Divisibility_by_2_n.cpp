#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int d=0;
        for(int i=0;i<n;i++){
            while(arr[i]%2==0){
                arr[i]/=2;
                d++;
            }
        }
        if(d>=n)cout<<"0"<<"\n";
        else{
            vector<int>arr1;
            for(int i=n;i>=1;i--){
                int e=0;int f=i;
                while(i%2==0){
                    i/=2;
                    e++;
                }
                i=f;
                arr1.push_back(e);
            }
            sort(arr1.begin(),arr1.end(),greater<int>());
            int e=0;
            for(int i=0;i<arr1.size();i++){
                d+=arr1[i];
                e++;
                if(d>=n)break;
            }
            if(d<n)cout<<"-1"<<"\n";
            else cout<<e<<"\n";
        }
    }
}