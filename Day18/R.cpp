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

string s[100],s1;
int vis[100][100];
int n,m;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void bfs(int x,int y){
    queue<pair<int,int>>q;
    q.push({x,y});
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;
    int ans =1;
    m = s[0].size();
    while(!q.empty()){
        auto [u,v] = q.front();
        q.pop();
        fi(i,0,8){
            int x1 = u+dx[i];
            int x2 = v+dy[i];
            if(x1>=0 and x1<n and x2>=0 and x2<m and vis[x1][x2]==0 and s[x1][x2]=='W'){
                q.push({x1,x2});
                vis[x1][x2]=1;
                ans++;
            }
        }
    }
    pr(ans);
}
int main(){
    int tt;
    cin>>tt;
    tt++;
    getchar();
    int sp=1;
    while(tt--){
        n=0;
        if(sp>2)cout<<nl;
        while(getline(cin,s1)){

            if(s1.size()==0)break;
            if(s1[0]=='W' || s1[0]=='L'){
                s[n++]=s1;
            }
            else{
                stringstream s2(s1);
                int v1;
                vector<int>v;
                while(s2>>v1){
                    v.pb(v1);
                }
                bfs(v[0]-1,v[1]-1);
            }


        }sp++;
    }



}



