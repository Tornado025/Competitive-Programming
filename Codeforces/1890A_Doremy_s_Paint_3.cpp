#include <bits/stdc++.h>
using namespace std;
int occurence(int a,int b[],int c){
    int d=0;
    for(int i=0;i<c;i++){
        if(b[i]==a)d++;
    }
    return d;
}
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=true;
        if(n<3)cout<<"Yes"<<"\n";
        else if(n==3){
            if(occurence(arr[0],arr,n)>=2||occurence(arr[1],arr,n)>=2)flag=true;
            else flag=false;
            if(flag==true)cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";
        }
        else{
            for(int i=0;i<n;i++){
                if(occurence(arr[i],arr,n)==(n/2)||occurence(arr[i],arr,n)==(n/2+1)||occurence(arr[i],arr,n)==n)
                    continue;
                else flag=false;
            }
            if(flag==true)cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";
        }
    }
}