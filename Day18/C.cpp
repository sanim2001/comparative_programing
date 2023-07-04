#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 20005
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

vector<int>g[N];
int color[N];
int ly=0,vam=0;
int c=1;
void clr(){
    fi(i,0,N)g[i].clear();
}
void bfs(int sr){
    queue<int>q;
    q.push(sr);
    color[sr]=1;
    vam++;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto child: g[curr]){
            if(!color[child]){
                q.push(child);
                if(color[curr]==1){
                    color[child]=2;
                    ly++;
                }
                else{
                    color[child]=1;
                    vam++;
                }
            }
        }
    }
}
void solve(){
    clr();
    int n,u,v;
    cin>>n;
    fi(i,0,n){
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    memset(color,0,sizeof(color));
    int ans =0;
    fi(i,0,N){
        vam=0,ly=0;
        if(color[i]==0 and g[i].size()>0){
            bfs(i);
        }
        ans+=max(vam,ly);
    }
    cout<<"Case "<<c++<<": "<<ans<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



