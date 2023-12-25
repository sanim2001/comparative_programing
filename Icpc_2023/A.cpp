#include<bits/stdc++.h>
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "; cout<<'\n'
typedef long long ll;
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
void init_code(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 

}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    int cnt =0;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
        cnt+=mp.size();
    }
    pr(cnt);
}
int main(){
    init_code();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}




