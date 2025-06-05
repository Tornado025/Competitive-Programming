#include <bits/stdc++.h>
using namespace std;
int32_t main(){
        string s;cin>>s;
        sort(s.begin(),s.end());
        set<string> s1;
        do{
            s1.insert(s);
        }while(next_permutation(s.begin(),s.end()));
        cout<<s1.size()<<"\n";
        for(auto i: s1){
            cout<<i<<"\n";
        }
}