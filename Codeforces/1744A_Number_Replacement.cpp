#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        string s;cin>>s;
        string ans=s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j])ans[j]=s[i];
            }
        }
        if(ans==s)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}