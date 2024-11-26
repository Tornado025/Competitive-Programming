#include <iostream>
using namespace std;
int main(){
    int m;cin>>m;
    for(int i=1;i<=m;i++){
        int t;cin>>t;
        string s;cin>>s;int d;
        bool flag=false;
        for(int i=0;i<t;i++){
            int j=0;
            while(s.at(i)=='.'){
                j++;i++;
                if(i==t)break;
            }
            if(j>2){cout<<"2"<<"\n";flag=true;break;}
            else d+=j;
        }
        if(flag==false)
        cout<<d<<"\n";
        d=0;
    }
}