#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int,int>> vc;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vc.push_back({a,1});
        vc.push_back({b,-1});
    }
    int sum=0;
    int mx=0;
    sort(vc.begin(),vc.end());
    for(const pair<int,int>& x:vc){
        sum+=x.second;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}