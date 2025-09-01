#include <bits/stdc++.h>
#define int long long int
using namespace std;
int arr[200007][40];
int32_t main()
{
    for(int i=0;i<200007;i++){
        for(int j=0;j<40;j++){
            arr[i][j]=0;
        }
    }
    for(int i=1;i<200007;i++){
        for(int j=0;j<40;j++){
            arr[i][j]=arr[i-1][j];
            if(i&(1<<j))arr[i][j]++;
        }
    }
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int maxi=0;
        for(int i=0;i<40;i++){
            maxi=max(maxi,arr[r][i]-arr[l-1][i]);
        }
        cout<<(r-l+1)-maxi<<"\n";
    }
}