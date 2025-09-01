#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<pair<int,int>,int>>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first.first >> a[i].first.second;
            a[i].second = a[i].first.first + a[i].first.second;
        }
        sort(a.begin(), a.end(), [](pair<pair<int,int>,int>a, pair<pair<int,int>,int>b){
            return a.second < b.second;
        });
        for(int i = 0; i < n; i++){
            cout << a[i].first.first << " " << a[i].first.second << " ";
        }
        cout << "\n";
    }
}