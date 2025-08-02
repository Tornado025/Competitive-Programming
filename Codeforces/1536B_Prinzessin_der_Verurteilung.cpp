#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    vector<string>str;
        for(char ch='a';ch<='z';ch++){
            string s="";
            s+=ch;
            //mp[s]=0;
            str.push_back(s);
        }
        for(char ch='a';ch<='z';ch++){
            for(char ch1='a';ch1<='z';ch1++){
                string s="";
                s+=ch;
                s+=ch1;
                //mp[s]=0;
                str.push_back(s);
            }
        }
        for(char ch='a';ch<='z';ch++){
            for(char ch1='a';ch1<='z';ch1++){
                for(char ch2='a';ch2<='z';ch2++){
                    string s="";
                    s+=ch;
                    s+=ch1;
                    s+=ch2;
                    //mp[s]=0;
                    str.push_back(s);
                }
            }
        }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;string s;cin>>s;map<string,int>mp;
        for(int j=0;j<3;j++){
            for(int i=0;i+j<n;i++){
                mp[s.substr(i,j+1)]++;
            }
        }
        for(int i=0;i<str.size();i++){
            if(mp[str[i]]==0){
                cout<<str[i]<<"\n";
                break;
            }
        }
    }
}