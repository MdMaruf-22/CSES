#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;cin>>n;
    vector<int> vc;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vc.push_back(x);
    }
    int sum=0,mx=numeric_limits<int>::min();
    for(auto x:vc){
        sum=max(sum+x,x);
        mx=max(sum,mx);
    }
    cout<<mx<<endl;
}