#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        stack<char> st;
        int l=INT_MAX,r=INT_MIN;int arr[n+1];int arr1[n+1];int d=0;
        for(int i=0;i<n;i++){
            arr[i]=0;arr1[i]=0;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                arr[i+1]=arr[i]+1;
                d++;
            }
            else{
                arr[i+1]=arr[i]-1;
                d--;
            }
            l=min(l,arr[i+1]);
            r=max(r,arr[i+1]);
        }
        if(d!=0){
            cout<<-1<<endl;
            continue;
        }
        if(l>=0){
            cout<<1<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(r<=0){
            cout<<1<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<2<<endl;
            vector<int> ans;
            for(int i=0;i<n;){
                int d=0;
                if(s[i]=='('){
                    d=1;
                }
                else{
                    d=2;
                }
                do{
                    i++;
                    ans.push_back(d);
                }while(arr[i]!=0);
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}