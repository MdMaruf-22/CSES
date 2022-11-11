#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int mid=(n/2);
    long long int sum=0;
    for(int i=0;i<n;i++){
        if(i==mid) continue;
        sum+=abs((arr[mid]-arr[i]));
    }
    cout<<sum<<endl;
}