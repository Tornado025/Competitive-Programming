#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,r,b;cin>>n>>r>>b;
        int a=r%(b+1);
        string red="";string def="";
        for(int i=0;i<(r/(b+1));i++)
        red+='R';
        for(int i=0;i<=b;i++){
            if(i>0)
            def+='B';
            def+=red;
            if(a>0){
                def+='R';
                a--;
            }
        }
        cout<<def<<"\n";
    }
}