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
        int sum = 0;
        map<int,int>mp;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            mp[arr[i]]++;
        }
        vector<int>arr1;
        for(int i=0;i<n;i++){
            sum-=arr[i];
            mp[arr[i]]--;
            if(sum%2==0&&mp[sum/2]>0&&sum/2<=1000000)arr1.push_back(i+1);
            sum+=arr[i];
            mp[arr[i]]++;
        }
        cout << arr1.size() << endl;
        for (int i = 0; i < arr1.size(); i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
    return 0;
}