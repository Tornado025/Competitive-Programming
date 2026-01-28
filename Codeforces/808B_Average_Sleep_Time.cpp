#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
        int n,k;
        cin >> n>>k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int>arr1;int d=1;int sum=0;
        if(k==1){
            for(int i=0;i<n;i++)sum+=arr[i];
            double avg=(double)sum/n;
            cout<<fixed<<setprecision(10)<<avg<<"\n";
            return 0;
        }
        else{
            int pref[n];pref[0]=arr[0];
            for(int i=1;i<n;i++)pref[i]=arr[i]+pref[i-1];
            double avg=pref[k-1];
            for(int i=k;i<n;i++){
                avg+=pref[i]-pref[i-k];
                d++;
            }
            cout<<fixed<<setprecision(10)<<avg/d<<"\n";
        }
        return 0;
}