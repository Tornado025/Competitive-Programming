#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;
        string s;cin>>s;
        int d=1;int maxi=0;
        for(int i=0;i<s.length()-1;i++){
            if(s.at(i+1)==s.at(i)){
                d++;
                if(i==s.length()-2)maxi=max(d,maxi);
            }
            else{
                maxi=max(d,maxi);
                d=1;
            }
        }
        if(n==1)cout<<"2"<<"\n";
        else
        cout<<(maxi+1)<<"\n";
    }
}