#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        long long n;cin>>n;
        long long arr[n];int d=0;
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2)d++;
        }
        if(d==0)cout<<"1"<<endl;
        else if(d%2!=0)cout<<"-1"<<endl;
        else{
            int e=0;int f=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2)e++;f++;
                if(e==(d/2))break;
            }
            cout<<f<<endl;
        }

    }
}