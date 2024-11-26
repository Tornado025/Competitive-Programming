#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;long long arr[n][3];
    for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
    cin>>arr[i][j];
    int sum=0;bool flag=true;
    for(int i=0;i<3;i++){
    for(int j=0;j<n;j++){
    sum+=arr[j][i];
    }
    if(sum!=0)flag=false;
    sum=0;
    }
    if(flag)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}