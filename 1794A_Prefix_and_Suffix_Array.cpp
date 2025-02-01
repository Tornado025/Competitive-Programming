#include <bits/stdc++.h>
using namespace std;
string rev(string s){
    string d="";
    for(int i=0;i<s.length();i++)d=s[i]+d;
    return d;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string arr[2*n-2];
        vector<string>arr1;
        for(int i=0;i<2*n-2;i++){
            cin>>arr[i];
            if(arr[i].length()==n-1)arr1.push_back(arr[i]);
        }
        //cout<<rev(arr1[0])<<" "<<arr1[1]<<"\n";
        if(rev(arr1[0])==(arr1[1]))cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}