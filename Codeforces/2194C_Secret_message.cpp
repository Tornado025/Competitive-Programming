#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;vector<string> arr;
        cin >> n >> k;
        for (int i = 0; i < k; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        string ans = "";
        vector<int> div;
        for(int i=1;i<=n;i++){
            if(n%i==0)div.push_back(i);
        }
        for (int i=0;i<div.size();i++) {
            string s1="";
            int x=div[i];
            bool flag=true;
            if(flag){
                for(int j=0;j<x;j++){
                    set<char> st;
                    for(int l=0;l<arr.size();l++){
                        st.insert(arr[l][j]);
                    }
                    for(int m=j+div[i];m<n;m+=div[i]){
                        set<char> st1;
                        for(int l=0;l<arr.size();l++){
                            st1.insert(arr[l][m]);
                        }
                        set<char> st2;
                        for(char c:st){
                            if(st1.count(c))st2.insert(c);
                        }
                        st=st2;
                        if(st.empty()){
                            flag=false;
                            break;
                        }
                    }
                    if(flag==false)break;
                    s1+=*st.begin();
                }
            }
            if(flag){
                for(int i=1;i<=n/x;i++){
                    ans+=s1;
                }
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}