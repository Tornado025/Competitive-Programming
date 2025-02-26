#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int>arr;
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
        }
        if(arr.size()==1)cout<<"YES"<<"\n";
        else{
            bool flag=true;
            int n=s.length();
            //cout<<arr.size()<<"\n";
            for(int i=arr.size();i<n;i++){
                if(s[i]!=s[i-arr.size()]){
                    flag=false;
                    break;
                }
            }
            if(flag==true)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
}