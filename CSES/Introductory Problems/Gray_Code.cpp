#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<string> gray(int n){
    if(n==1)return {"0","1"};
    vector<string> prev= gray(n-1);
    vector<string> rev=prev;
    reverse(rev.begin(),rev.end());
    int i=0;
    while(i<rev.size()){
        string s="0"+prev[i];
        prev[i]="1"+rev[i];
        prev.push_back(s);
        i++;
    }
    return prev;
}
int32_t main(){
    int n;cin>>n;
    vector<string> s=gray(n);
    for(int i=0;i<(1<<n);i++)cout<<s[i]<<"\n";
}