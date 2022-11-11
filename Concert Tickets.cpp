#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
bool visit[N]={false};
int main(){
    int n,m;cin>>n>>m;
    int h[n],t[m];
    multiset<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        auto up=st.upper_bound(x);
        if(up==st.begin()) cout<<-1<<endl;
        else{
            cout<<(*--up)<<endl;
            st.erase(up);
        }
    }
}