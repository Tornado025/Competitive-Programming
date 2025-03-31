#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,q;cin>>n>>q;
    int arr[n];int sum=0;int pos[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        pos[i]=0;
    }
    int prev=-1;int next=0;
    for(int i=0;i<q;i++){
        int op,x,y;cin>>op;
        if(op==1){
            cin>>y>>x;
            if(pos[y-1]<=prev)sum-=next;
            else sum-=arr[y-1];
            sum+=x;pos[y-1]=i;
            arr[y-1]=x;
            cout<<sum<<"\n";
        }
        else{
            cin>>x;
            sum=n*x;
            cout<<sum<<"\n";
            next=x;prev=i;
        }
    }
}