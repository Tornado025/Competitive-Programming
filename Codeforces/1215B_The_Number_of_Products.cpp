#include <bits/stdc++.h>
#define int long long int 
using namespace std;
int32_t main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ct=0;int ct1=0;int negc=0;int ct2=0;
    for (int i = 0; i < n; i++) {
        if(negc%2==0)ct1++;
        else ct++;
        if(arr[i]<0)negc++;
        if(negc%2==0)ct2+=ct1;
        else ct2+=ct;
    }
    cout <<n*(n+1)/2 -  ct2 <<" " << ct2 << endl;
    return 0;
}