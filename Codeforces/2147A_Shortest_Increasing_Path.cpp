#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;cin>>x>>y;
        if(x==y||y==1)cout<<"-1"<<"\n";
        else if(x<y)cout<<"2"<<"\n";
        else if(x>y){
            if((x-2)>(y-1))cout<<"3"<<"\n";
            else cout<<"-1"<<"\n";
        }
    }
    return 0;
}