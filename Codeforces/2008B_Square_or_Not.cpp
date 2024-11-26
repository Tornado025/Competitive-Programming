#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++) {
        int n;cin>>n;
        string s;cin>>s;
        int a=(int)sqrt(n);
        if(a*a!=n) cout<<"No"<<"\n";
        else{
            bool flag=true;char arr[a][a];
            int ct=0;
            for(int i=0;i<a;i++) {
                for(int j=0;j<a;j++){
                    arr[i][j]=s.at(ct++);
                }
            }
            for(int i=0;i<a;i++) {
                for(int j=0;j<a;j++){
                    if(i==0||i==a-1||j==0||j==a-1){
                        if(arr[i][j]=='0')flag=false;
                    }
                    else{
                        if(arr[i][j]=='1')flag=false;
                    }
                }
            }
            if(flag)cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";
        }
    }
}