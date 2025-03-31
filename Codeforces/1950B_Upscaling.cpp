#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s1="";string s2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1=s1+"##";
                s2=s2+"..";
            }
            else{
                s2=s2+"##";
                s1=s1+"..";
            } 
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<s1<<"\n";
                cout<<s1<<"\n";
            }
            else{
                cout<<s2<<"\n";
                cout<<s2<<"\n";
            } 
        }
    }
}