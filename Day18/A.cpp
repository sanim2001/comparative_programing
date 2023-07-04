#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
#define     mod               1000000007
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);


int n,m,u,v;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};



int main(){
    int tt;
    cin>>tt;
    while(tt--){
        cin>>n>>m;
        vector<int>g[n];
        map<int,int>vt,lev;
        fi(i,0,m){
            cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        queue<int>q;
        q.push(0);
        vt[q.front()]=1;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x1:g[curr]){
                if(!vt[x1]){
                    q.push(x1);
                    vt[x1]=1;
                    lev[x1]=lev[curr]+1;
                }
            }

        }
        fi(i,1,n){
            cout<<lev[i]<<nl;
        }
        if(tt>0)cout<<nl;
    }



}




