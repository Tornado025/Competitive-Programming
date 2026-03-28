#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        int arr[n][n];map<int,int> mp;bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                mp[arr[i][j]]++;
                if(mp[arr[i][j]]>(n*(n-1))){
                    flag=true;
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}