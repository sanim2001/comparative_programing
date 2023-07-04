#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
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

vector<string>g(100);
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
int n,m;
int dfs(int r, int col){
    if(r<0 || r>=n || col<0 || col>=m) return 0;
    if(g[r][col]=='*') return 0;
    g[r][col]='*';
    fi(i,0,8){
        int p = r+dx[i];
        int q = col+dy[i];
        dfs(p,q);
    }
    return 1;
}
int main(){

    while(cin>>n>>m){
        if(n==0 and m==0)break;
        fi(i,0,n)cin>>g[i];
        int cnt=0;
        fi(i,0,n){
            fi(j,0,m){
                if(g[i][j]=='@'){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        pr(cnt);

    }


}



