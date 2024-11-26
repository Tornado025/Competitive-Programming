#include <iostream>
using namespace std;
bool check(string a, string b){
   for(int i = 0; i < a.length(); i++ ){
        string temp = a.substr(i, b.length());
       
        if(temp == b){
            return true;
        }
    
   }
   return false;
}
string append(string a){
    return a+a;
}

int main(){
    int a;cin>>a;
    for(int i=1;i<=a;i++){
        int n,m;string x,s;
        cin>>n>>m;
        cin>>x;
        cin>>s;
        int d=0;bool flag=false;
        while(true){
            if(check(x,s)==true){cout<<d<<"\n";flag=true;break;}
            if(x.length()>m){
                x=append(x);
                if(check(x,s)==true){cout<<++d<<"\n";flag=true;break;}
                else break;
            }
            x=append(x);
            d++;
        }
        if(flag==false)
        cout<<"-1"<<"\n";
    }
}