    #include <bits/stdc++.h>
    #define int long long int
    using namespace std;
    int32_t main(){
        int t;cin>>t;
        while(t--){
            int n1,n2;string s1,s2,s3;
            cin>>n1>>s1>>n2>>s2>>s3;
            int l=0,r=n2-1;
            for(int i=0;i<s3.length();i++){
                if(s3[i]=='D'){
                    s1+=s2[i];
                }
                else {
                    s1=s2[i]+s1;
                }
            }
            cout<<s1<<"\n";
        }
    }