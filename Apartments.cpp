#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n,m,k;cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int brr[m];
    for(int i=0;i<m;i++) cin>>brr[i];
    sort(arr,arr+n);sort(brr,brr+m);
    int cnt=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(arr[i]-brr[j])<=k){
            cnt++;
            i++;
            j++;
        }
        else if(arr[i]<brr[j]) i++;
        else j++;
    }
    cout<<cnt<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}