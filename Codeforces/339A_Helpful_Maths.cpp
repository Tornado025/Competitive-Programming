#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    vector<int>arr;int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
        arr.push_back(s[i]-48);
        a++;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<a-1;i++)cout<<arr[i]<<"+";
    cout<<arr[a-1]<<"\n";
}