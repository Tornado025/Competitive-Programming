#include <bits/stdc++.h>
#define int long long int
using namespace std;
int n=8;int n1=n*2-1;
vector<bool> row(n);
vector<bool> ld(n1);
vector<bool> rd(n1);
int ans=0;
vector<vector<bool>> blocked(8,vector<bool>(8));
void checkqueens(int a){
    if(a==8){
        ans++;
        return;
    }
    for(int i=0;i<8;i++){
        bool rows=!row[i];
        bool diag=!ld[i+a]&&!rd[i-a+7];
        if(rows&&diag&&!blocked[i][a]){
            row[i]=ld[i+a]=rd[i-a+7]=true;
            checkqueens(a+1);
            row[i]=ld[i+a]=rd[i-a+7]=false;
        }
    }
}
int32_t main(){
    for(int i=0;i<8;i++){
        string arr;
        cin>>arr;
        for(int j=0;j<8;j++){
            blocked[i][j]=(arr[j]=='*');
        }
    }
    int a=0;
    checkqueens(a);
    cout<<ans<<"\n";
}