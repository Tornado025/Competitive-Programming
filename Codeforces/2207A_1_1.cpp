#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;string s;
        cin >> n >> s;
        string s1;string s2;
        s1+=s[0];
        for (int i = 1; i < n; i++) {
            if(i==n-1) {
                s1+=s[i];
                break;
            }   
            if((s[i]=='0'&&s[i-1]=='0')||(s[i]=='0'&&s[i+1]=='0')) {
                while(i<n&&s[i]=='0') {
                    s1+='0';
                    i++;
                    if(i==n-1) {
                        s1+=s[i];
                        i++;
                        break;
                    }
                }
                if(i<n) {
                    s1+='1';
                }
            }
            else s1+='1';
        }
        for(int i=0;i<n;i++)s2+=s1[i];
        for(int i=1;i<n;i++) {
            if(s2[i+1]=='1'&&s2[i-1]=='1') {
                s2[i]='0';
            }
        }        
        //cout << s2 << endl;
        int ans1=0;int ans2=0;
        for(int i=0;i<n;i++) {
            if(s2[i]=='1')ans1++;
            if(s1[i]=='1')ans2++;
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}