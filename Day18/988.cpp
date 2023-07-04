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
#define     out(a)            for(auto &x : a) cout<<x<<"\n"
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};

void solve(){
    int n;
    cin>>n;
    string s[n];
    string s1;
    int mx =0;
    fi(i,0,n){
        cin>>s[i];
    }
    fi(i,0,n){
        fi(j,i+1,n){
            if(s[i].size()>s[j].size()){
                swap(s[i],s[j]);
            }
        }
    }
    ri(i,n-1,1){
        if(s[i].find(s[i-1])!=-1){
            continue;
        }
        else{
            no;
            return;
        }
    }
    yes;

    out(s);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



