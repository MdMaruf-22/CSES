#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int ind[N]={-1};
int main(){
    int n,x;cin>>n>>x;
    vector<pair<int,int>> vc;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vc.push_back({x,i+1});
    }
    sort(vc.begin(),vc.end());
    // cout<<vc[0].first<<" "<<vc[2].first<<endl;
    // cout<<endl;
    int lo=0,hi=n-1;
    while(lo<hi){
        if(vc[lo].first+vc[hi].first==x){
            cout<<vc[lo].second<<" "<<vc[hi].second<<endl;
            return 0;
        }
        else if(vc[lo].first+vc[hi].first>x) hi--;
        else lo++;
    }
    cout<<"IMPOSSIBLE"<<endl;
}