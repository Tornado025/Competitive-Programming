#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int x;
        vector<int>odd,even;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%2!=0)odd.push_back(i+1);
            else even.push_back(i+1);
        }
        if((odd.size()==2&&even.size()==1)||odd.size()==0)cout<<"NO"<<"\n";
        else {
            cout<<"YES\n";
            if(odd.size()>=3)
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<"\n";
            else
            cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<"\n";
        }
    }
}