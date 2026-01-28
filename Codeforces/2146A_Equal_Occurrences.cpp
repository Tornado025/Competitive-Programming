#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];map<int,int>mp;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        } 
        int maxi=0;vector<int>arr1;
        for(auto it:mp){
            arr1.push_back(it.second);
        }
        sort(arr1.begin(),arr1.end());
        int d=mp.size();
        for(int i=0;i<arr1.size();i++){
            maxi=max(maxi,arr1[i]*d);
            d--;
        }
        cout << maxi << endl;
    }
    return 0;
}
        