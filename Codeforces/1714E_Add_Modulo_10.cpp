#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define MOD 1000000007
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;int arr[n];bool flag1=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%5==0){
                arr[i]+=arr[i]%10;
                flag1=true;
            }
        }
        if(flag1==true){
            sort(arr,arr+n);
            if(arr[0]!=arr[n-1])cout<<"No"<<"\n";
            else cout<<"Yes"<<"\n";
            continue;
        }
        bool flag=false;
        set<int>a;
        for(int i=0;i<n;i++){
            while(arr[i]%10!=2)arr[i]+=arr[i]%10;
            if(arr[i]%20==2)a.insert(2);
            else if(arr[i]%20==12)a.insert(12);
            if(a.size()==2)flag=true;
        }
        if(flag==true)cout<<"No"<<"\n";else cout<<"Yes"<<"\n";
    }
}