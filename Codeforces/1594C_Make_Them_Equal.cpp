#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;char a;cin>>n>>a;
        string s1;string s="";cin>>s1;
        for(int i=0;i<n;i++)s+=a;
        if(s==s1)cout<<"0"<<"\n";
        else{
            vector<int>arr1;bool flag=false;
            for(int i=1;i<=n;i++){
                flag=true;
                for(int j=i;j<=n;j+=i){
                    flag=(flag&&(s1[j-1]==a));
                }
                if(flag==true){
                    cout<<"1"<<"\n";
                    cout<<i<<"\n";
                    break;
                }
            }
            if(flag==false){
                cout<<"2"<<"\n";
                cout<<n<<" "<<(n-1)<<"\n"; 
            }
        }
    }
}