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
typedef long long int ll;
typedef long double ld;
using namespace std;
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n;
    cin>>n;
    int a[n];
    fi(i,0,n)cin>>a[i];
    int x=0,y=n-1;
    int c = count(a,a+n,1);
    int x1=0,x2=0;
    while(x<y){
        if(a[x]==0){
            x1 =x;
            break;
        }
        x++;
    }
    while(x<y){
        if(a[y]==0){
            x2 =y;
            break;
        }
        y--;
    }
    int mx=-n;
    fi(i,x1,x2+1){
        int sum=0;
        fi(j,i,x2+1){
            if(a[j]==0)sum++;
            else sum--;
            mx = max(mx,sum);
        }
    }
    pr(c+mx);

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }

}



