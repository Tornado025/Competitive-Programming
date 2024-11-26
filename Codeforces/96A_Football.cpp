#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int d=1;bool flag = false;
    if(s.size()<7)cout<<"NO"<<"\n";
    else{
        for(int i=0;i<s.size()-1;i++){
            if(s.at(i)==s.at(i+1)){
                d++;
                if(d==7){
                    flag=true;
                    break;
                }
            }
            else d=1;
        }
        if(flag==true)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}