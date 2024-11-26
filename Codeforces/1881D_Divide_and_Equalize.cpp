#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
    int n;cin>>n;int arr[n];int maxi=0;
    for(int i=0;i<n;i++){cin>>arr[i];maxi=max(arr[i],maxi);}
    int count[maxi];
    for(int i=0;i<maxi;i++)count[i]=0;
    for(int i=0;i<n;i++){
            int j=2;
        while((j*j)<=arr[i]){
            while(arr[i]%j==0){count[j-1]++;arr[i]/=j;}
            j++;
        }count[arr[i]-1]++;
    }
    //for(int i=1;i<maxi;i++)if(count[i]!=0)cout<<count[i]<<" ";
    string s="YES";
    for(int i=1;i<maxi;i++)if(count[i]>0&&count[i]%n!=0)s="NO";
    cout<<s<<"\n";
    }
}