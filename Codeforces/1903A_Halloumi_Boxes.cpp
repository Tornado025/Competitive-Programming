#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int ab=1;ab<=n;ab++){
        int a,b;cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++)cin>>arr[i];
        int d=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a-i-1;j++){
                if(arr[j]>arr[j+1]){
                    d++;
                    int swap=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=swap;
                }
            }
        }
        if(d==0)cout<<"YES"<<"\n";
        else if(b>1)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}