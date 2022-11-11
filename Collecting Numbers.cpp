#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int pos[n+1];
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        pos[x]=i;
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        if(pos[i]>pos[i+1]) cnt++;
    }
    cout<<cnt+1<<endl;
}