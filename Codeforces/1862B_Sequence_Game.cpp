#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(i!=0){
                if(a.back()>x)a.push_back(x);
            }
            a.push_back(x);
        }
        cout<<a.size()<<"\n";
        for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
}