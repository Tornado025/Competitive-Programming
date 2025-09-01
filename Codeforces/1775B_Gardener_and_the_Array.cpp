#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>>arr(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int k;cin>>k;
            for(int j=0;j<k;j++){
                int x;cin>>x;
                mp[x]++;
                arr[i].push_back(x);
            }
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            bool flag1=true;
            for(int j=0;j<arr[i].size();j++){
                if(mp[arr[i][j]]==1){
                    flag1=false;
                    break;
                }
            }
            if(flag1==true){
                flag=true;break;
            }
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}