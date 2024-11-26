#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int n;cin>>n;int arr[n];int sorted[n];
        int avg=0;
        for(int i=0;i<n;i++){cin>>arr[i];sorted[i]=arr[i];avg+=arr[i];}
        if(n<=2)cout<<"-1"<<endl;
        else{
        sort(sorted,sorted+n);
        int med=0;
        med=sorted[(n/2)];
        if(avg>(med*2*n)) cout<<"0"<<"\n" ;
        else cout<<((2*med*n)-avg+1)<<"\n";
        }
    }
}