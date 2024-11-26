#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int arr1[4]={-1,1,-1,1};int arr2[4]={-1,-1,1,1};
        int a,b,k1,k2,q1,q2;
        cin>>a>>b>>k1>>q1>>k2>>q2;
        int ct=0;
        set<pair<int,int>>st1,st2;
        for(int j=0;j<4;j++){
            st1.insert({k1+arr1[j]*a,q1+arr2[j]*b});
            st2.insert({k2+arr1[j]*a,q2+arr2[j]*b});
            st1.insert({k1+arr1[j]*b,q1+arr2[j]*a});
            st2.insert({k2+arr1[j]*b,q2+arr2[j]*a});
        }
        for(auto x : st1)
            if(st2.find(x) != st2.end())ct++;
        cout<<ct<<endl;
    }
}