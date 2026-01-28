#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define MOD 1000000007
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;string s;cin>>s;
        int l=0,r=n-1;
        vector<int>arr;bool flag=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')arr.push_back(i+1);
        }
        cout<<arr.size()<<"\n";
        for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<"\n";
    }
}