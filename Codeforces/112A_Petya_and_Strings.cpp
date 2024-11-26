#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;string s2;cin>>s1>>s2;
    int d=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A'&&s1[i]<='Z')s1[i]+=32;
        if(s2[i]>='A'&&s2[i]<='Z')s2[i]+=32;
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]<s2[i]&&(s2[i]-s1[i]!=32)){d=-1;break;}
        else if(s1[i]>s2[i]&&(s1[i]-s2[i]!=32)){d=1;break;}
    }
    cout<<d<<"\n";
}