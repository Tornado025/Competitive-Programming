#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int hr=stoi(s.substr(0,2));
        string min=s.substr(2);
        if(hr==0)cout<<to_string(hr+12)+min+" AM"<<"\n";
        else if(hr<12)cout<<s+" AM"<<"\n";
        else if(hr==12)cout<<s+" PM"<<"\n";
        else if(hr<22) cout<<"0"+to_string(hr-12)+min+" PM"<<"\n";
        else cout<<to_string(hr-12)+min+" PM"<<"\n";
    }
}