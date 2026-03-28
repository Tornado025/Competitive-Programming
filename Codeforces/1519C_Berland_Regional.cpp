#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        vector<vector<int>> arr(n);
        for(int i=0;i<n;i++){
            arr[arr1[i]-1].push_back(arr2[i]);
        }
        int k=arr.size();
        int ans[n];
        for(int i=0;i<n;i++){
            ans[i]=0;
            sort(arr[i].begin(),arr[i].end(),greater<int>());
        }
        for(int i=0;i<k;i++){
            //cout<<arr[i].size()<<"\n";
            int pref[arr[i].size()];
            for(int j=0;j<arr[i].size();j++){
                pref[j]=0;
            }
            for(int j=0;j<arr[i].size();j++){
                if(j==0){
                    pref[j]=arr[i][j];
                }
                else{
                    pref[j]=pref[j-1]+arr[i][j];
                }
            }

            for(int j=0;j<arr[i].size();j++){
                int a=arr[i].size()-(arr[i].size()% (j+1));
                ans[j]+=pref[a-1];
                //cout<<pref[j]<<" ";
            }
            //cout<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}