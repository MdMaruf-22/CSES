#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> vc;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        vc.push_back({b,a});
    }
    sort(vc.begin(),vc.end());
    int curr=0,cnt=0;
    for(auto x:vc){
        if(x.second>=curr){
            curr=x.first;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}