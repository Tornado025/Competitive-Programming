#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    long long m=n;
    while(n!=0){
        int d=n%10;
        if(d==0){
            n/=10;
            continue;
        }
        else if(m%d!=0)return false;
        n/=10;
    }
    return true;
}
int main(){
    int t;cin>>t;
    for(int m=0;m<t;m++){
        long long n;cin>>n;
        while(check(n)!=true)n++;
        cout<<n<<"\n";
    }
}