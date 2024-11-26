#include <iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;int a[n];int b[n-1];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=1;i<n;i++)b[i-1]=a[i];
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i-1;j++){
                if(b[j]>b[j+1]){
                    int swap=b[j];
                    b[j]=b[j+1];
                    b[j+1]=swap;
                }
            }
        }
        if(a[0]>=b[0])cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}