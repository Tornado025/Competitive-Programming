#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    if(s.length()==2){
        if(s[0]==s[1]){
            if(s[0]=='z')s[0]='a';
            else s[0]=s[1]++;
        }
        cout<<s<<"\n";
    }
    else{
        char ch1=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                for(char ch='a';ch<='z';ch++){
                    if(ch1!=ch){
                        if(i==s.length()-1){
                            s[i]=ch;
                            break;
                        }
                        else{
                            if(s[i+1]!=ch){
                                s[i]=ch;
                                break;
                            }
                        }
                    }
                }
            }
            ch1=s[i];
        }
        cout<<s<<"\n";
    }
    return 0;
}