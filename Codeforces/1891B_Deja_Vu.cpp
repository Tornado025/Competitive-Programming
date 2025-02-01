#include <bits/stdc++.h>
#define int long long int
using namespace std;
int n,q;int arr[200000];int quer[200000];
int pow(int a){
    return 1<<a;
}
int ans(int a,vector<int>f){
    for(int k=0;k<q;k++){
        int flag=true;
        for(int j=1;j<=30;j++){
            if(a%pow(j)==0){
                if(f[j]>0){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)break;
        if(a%pow(quer[k])==0){
            a+=pow(quer[k]-1);
            f[quer[k]]--;
        }
    }
    return a;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>q;
        vector<int>f(32,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<q;i++){
            cin>>quer[i];
            f[quer[i]]++;
        }
        for(int i=0;i<n;i++){
            cout<<ans(arr[i],f)<<" ";
        }
        cout<<"\n";
    }
}