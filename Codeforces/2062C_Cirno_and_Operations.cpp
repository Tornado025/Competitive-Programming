#include <bits/stdc++.h>
#define int long long int
using namespace std;
int fact(int n){
    if(n==0)return 1;
    else{int s=1;
    for(int i=1;i<=n;i++)s*=i;return s;}
}
int combo(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int copy=n;int ans=-100000000007;
        for(int i=0;i<n;i++){
			int sum=0;
			for (int i=0;i<copy;i++)sum+=arr[i] ;
			if (i==0)ans=max(ans,sum);
			else ans=max(ans,max(sum,(-sum)));
			for (int i=0;i<copy;i++) arr[i] =arr[i+1]-arr[i] ;
			copy--;
		}
		cout<<ans<<"\n"; 
    }
}