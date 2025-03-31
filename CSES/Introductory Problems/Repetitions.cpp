#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    string s;cin>>s;int maxi=0;
    for(int i=0;i<s.length();i++){
        int d=1;
        while(i!=s.length()&&s[i]==s[i+1]){
            d++;
            i++;
        }
        maxi=max(maxi,d);
    }
    cout<<maxi<<"\n";
}