#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n,q;cin>>n>>q;
    vector<pair<int,int>>arr(n+1);
    vector<int>arr1;int unread=0;int read=0;
    for(int i=0;i<q;i++){
        int unread1=300000;
        int x,y;cin>>x>>y;
        if(x==1){
            arr[y].first++;
            unread++;
            arr1.push_back(y);
        }
        else if(x==2){
            unread-=arr[y].first;
            arr[y].second=arr1.size();
            arr[y].first=0;
        }
        else{
            if(y>read){
                for(int j=read;j<y;j++){
                    if(j>=arr[arr1[j]].second){
                        arr[arr1[j]].first--;
                        unread--;
                    }
                }
                read=y;
            }
        }
        cout<<unread<<"\n";
    }
}