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
    int l =0,d=0;
    int x;
    fi(i,0,n){
        cin>>x;
        if(x>0)l++;
        else d++;
    }
    fi(i,0,l){
        cout<<i+1<<" ";
    }
    int dis = l;
    fi(i,0,d){
        dis--;
        cout<<dis<<" ";
    }
    cout<<nl;
    dis = l-d;
    fi(i,0,d){
        cout<<1<<" "<<0<<" ";
    }
    fi(i,0,dis){
        cout<<i+1<<" ";
    }
    cout<<nl;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



