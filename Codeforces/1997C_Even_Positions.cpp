#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        int sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0)continue;
            else{
                if(s[i]=='(')sum+=3;
                else sum++;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}