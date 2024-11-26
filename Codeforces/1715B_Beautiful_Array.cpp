#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int arr[a];
        arr[0]=b*c;
        d-=arr[0];
        if(d<0)cout<<"-1"<<"\n";
        else{
            for(int i=0;i<a;i++){
                arr[i]=min(b-1,d);
                d-=arr[i];
            }
            if(d>0)cout<<"-1"<<"\n";
            else{
                arr[0]+=(b*c);
                for(int i=0;i<a;i++)
                cout<<arr[i]<<" ";
                cout<<"\n";
            }
        }
    }
}