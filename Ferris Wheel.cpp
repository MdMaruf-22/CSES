#include<bits/stdc++.h>
using namespace std;
bool binary_search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(high-low>1){
        int mid=(high+low)/2;
        if(arr[mid]<x) low=mid+1;
        else high=mid;
    }
    if(arr[low]==x || arr[high]==x) return true;
    return false;
}
int main(){
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int cnt=0;
    int lo=0,hi=n-1;
    while (lo<hi)
    {
        if(arr[lo]+arr[hi]>x) hi--;
        else{
            cnt++;
            lo++;
            hi--;
        } 
    }
    cout<<n-cnt<<endl;
}