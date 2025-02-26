#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;int n=s.length();
        s+=s;int maxi=0;
        for(int i=0;i<s.length();i++){
            int k=0;
            while(s[i]=='1'){
                i++;
                k++;
                if(i==s.length())break;
            }
            maxi=max(maxi,k);
        }
        if(maxi>=n)cout<<n*n<<"\n";
        else if(maxi<2)cout<<maxi<<"\n";
        else cout<<((maxi+1)/2)*((maxi+2)/2)<<"\n";
    }
}