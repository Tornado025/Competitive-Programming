#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int h=0;vector<pair<int,int>>arr1(n);
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            arr1[i]={a,b};
        }
        bool flag=true;int low=0;int up=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                low++;
                up++;
            }
            else if(arr[i]==-1)up++;
            if(up<arr1[i].first||low>arr1[i].second){
                flag=false;
                break;
            }
            low=max(low,arr1[i].first);
            up=min(up,arr1[i].second);
        }
        if(flag==false)cout<<"-1"<<"\n";
        else{
            low=0;
            int lim[n];//max number of 1s before the next set of limit
            for(int i=0;i<n;i++){
                if(arr[i]==1)low++;
                lim[i]=arr1[i].second-low;
            }
            //setting the limits properly 
            for(int i=n-2;i>=0;i--)
            lim[i]=min(lim[i+1],lim[i]);
            int curr=0;//for setting the unknowns properly
            for(int i=0;i<n;i++){
                if(arr[i]==-1){
                    if(curr<lim[i]){
                        curr++;
                        arr[i]=1;
                    }
                    else arr[i]=0;
                }
            }
            for(int i=0;i<n;i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
}