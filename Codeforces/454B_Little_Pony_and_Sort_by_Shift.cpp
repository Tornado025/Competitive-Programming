#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t	main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini=1000000007;int d=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=mini){
            mini=arr[i];
            d=i;
        }
    }
    for(int i=1;i<n;i++){
        if(mini==arr[i]&&arr[i-1]!=arr[i]){
            d=i;
            break;
        }
    }
    int arr1[n];int k=0;
    for(int i=d;i<n;i++){
        arr1[k++]=arr[i];
    }
    for(int i=0;i<d;i++)arr1[k++]=arr[i];
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr1[i]>arr1[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==false)cout<<"-1"<<"\n";
    else if(d==0||arr1[n-1]==arr1[0])cout<<"0"<<"\n";
    else cout<<(n-d)<<"\n";
}