#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    string s;cin>>s;
    stack<int> st;int n=1000000;int d[n];
    for(int i=0;i<n;i++)d[i]=-1;
    int maxi=0;int ct=1;
    for(int i=0;i<s.length();i++){
        if(st.empty()||s[i]=='('){
            st.push(i);
            continue;
        }
        int pos=st.top();
        if(s[pos]=='('){
            if(d[pos-1]!=-1)d[i]=d[pos-1];//updating new position of long string
            else d[i]=pos;//sticking to the original one 
            int len=i-d[i]+1;
            if(len>maxi){
                maxi=len;
                ct=1;
            }
            else if(len==maxi)ct++;
        }
        st.pop();
    }
    cout<<maxi<<" "<<ct<<"\n";
}
