#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;cin>>n>>k;
        if(n%k!=0){cout<<"1"<<"\n"<<n<<"\n";}
        else{
            for(int i=1;i<=n-1;i++){
                if(i%k!=0&&(n-i)%k!=0){cout<<"2"<<"\n"<<i<<" "<<(n-i)<<"\n";break;}
            }
        }
    }
}