    #include <bits/stdc++.h>
    #define int long long int
    using namespace std;
    int32_t main(){
        int t;cin>>t;
        while(t--){
            int n;cin>>n;string s;cin>>s;
            int cnt0=0,cnt1=0,cnt2=0;
            bool flag=true;
            for(int i=0;i<n;i++){
                if(s[i]=='0')cnt0++;
                else cnt1++;
                if(s[i]!=s[n-i-1])flag=false;
            }
            if(flag==true){
                if(cnt0==1||cnt0%2==0)cout<<"BOB"<<"\n";
                else cout<<"ALICE"<<"\n";
            }
            else{
                for(int i=0;i<n/2;i++){
                    if(s[i]!=s[n-i-1])cnt2++;
                }
                if(cnt0==2&&cnt2==1)cout<<"DRAW"<<"\n";
                else cout<<"ALICE"<<"\n";
            }
        }
    }