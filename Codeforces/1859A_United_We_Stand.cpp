#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;cin>>t;
    for(int m=1;m<=t;m++){
        int l;cin>>l;int arr[l];
        for(int i=0;i<l;i++)cin>>arr[i];
        for(int i=0;i<l;i++){
            for(int j=0;j<l-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int swap=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=swap;
                }
            }
        }
        bool flag=false;
        vector<int> b;b.push_back(arr[0]);
        for(int i=1;i<l;i++){
            if(arr[i]==arr[0])b.push_back(arr[0]);
            else flag=true;
        }
        if(flag==false)cout<<"-1"<<"\n";
        else {
            cout<<b.size()<<" "<<(l-b.size())<<"\n";
            for(int i=0;i<b.size();i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
            for(int i=b.size();i<l;i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
}