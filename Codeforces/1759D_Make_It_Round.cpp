#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int ct2=0,ct5=0,cpy=n;
        while(cpy%2==0) {
            ct2++;
            cpy/=2;
        }
        while(cpy%5==0) {
            ct5++;
            cpy/=5;
        }
        //cout << ct2 << " " << ct5 << endl;
        int e=ct2;
        ct2-=ct5;
        ct5-=e;
        int ans=1;
        while(ct2>0&&ans*5<=k) {
            ans*=5;
            ct2--;
        }
        while(ct5>0&&ans*2<=k) {
            ans*=2;
            ct5--;
        }
        while(ans*10<=k) {
            ans*=10;
        }
        if(ans==1) {
            cout << n*k << endl;
        }
        else {
            ans=(k/ans)*ans;
            cout << n*ans << endl;
        }
    }
    return 0;
}