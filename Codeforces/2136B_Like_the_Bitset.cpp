#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;cin>>n>>k;string s;cin>>s;
        int d=0;bool flag=false;
        for(int i=0;i<n;i++) {
            while(s[i]=='1'&&i<n){
                d++;
                if(d==k) {
                    flag=true;
                    break;
                }
                i++;
            }
            d=0;
            if(flag)break;
        }
        if(flag)cout<<"NO"<<endl;
        else{ 
            cout<<"YES"<<endl;
            int d=1;int arr[n];
            for(int i=0;i<n;i++) {
                if(s[i]=='1'){
                    arr[i]=d;
                    d++;
                }
            }
            for(int i=0;i<n;i++) {
                if(s[i]=='0'){
                    arr[i]=d;
                    d++;
                }
            }
            for(int i=0;i<n;i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl; 
        }
    }
    return 0;
}