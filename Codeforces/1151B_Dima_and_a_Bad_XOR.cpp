#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;int arr[n][m];
    set<int>st;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            st.insert(arr[i][j]);
        }
    }
    if(n==1&&((st.size()==1&&arr[0][0]!=0)||st.size()>1)){
        cout<<"TAK\n";
        for(int i=0;i<m;i++){
            if(arr[0][i]!=0){
                cout<<i+1<<" ";
                break;
            }
        }
    }
    else if(st.size()==1){
        cout<<"NIE\n";
    }
    else{
        int ans[n];bool flag=false;
        for(int i=0;i<n;i++)ans[i]=1;
        int x=0,y=0;int sum=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][0]!=arr[i][j]){
                    x=i+1;
                    y=j+1;
                }
            }
            sum^=arr[i][0];
        }
        if(sum==0&&x==0)cout<<"NIE\n";//no two distinct elements 
        else{
            cout<<"TAK\n";
            if(sum==0)ans[x-1]=y;//subbing the particular element
            for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        }
    }
    return 0;
}