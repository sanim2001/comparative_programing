#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(ll i=a;i<b;i++)
#define     ri(i,b,a)         for(ll i=b;i>=a;i--)
#define     N                 26
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
int color[N][N];
char g[N][N];
int ans =0;
int n,m,x,y,c=1;
bool check(int x,int y){
    if(x>=0 and x<m and y>=0 and y<n)return true;
    else return false;
}
void dfs(int x,int y){
    fi(i,0,4){
        if(check(x+dx[i],y+dy[i]) and color[x+dx[i]][y+dy[i]]==0 and g[x+dx[i]][y+dy[i]]=='.'){
            ans++;
            color[x+dx[i]][y+dy[i]]=1;
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ans=0;
        memset(color,0,sizeof(color));
        getchar();
        fi(i,0,m){
            fi(j,0,n){
                g[i][j]=getchar();
                if(g[i][j]=='@'){
                    x=i;
                    y=j;
                    ans++;
                    color[x][y]=true;
                }
            }
            getchar();
        }
        dfs(x,y);
        cout<<"Case "<<c++<<": "<<ans<<nl;
    }

}



