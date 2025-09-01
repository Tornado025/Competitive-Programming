#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;int sum=0;int xori=0;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum+=arr[i];
            xori^=arr[i];
        }
        cout<<"2\n"<<xori<<" "<<xori+sum<<"\n";
    }
}