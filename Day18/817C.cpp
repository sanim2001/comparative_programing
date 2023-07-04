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
    map<string,int>mp;
    vector<string>v;
    string s;
    fi(i,0,3){
        fi(j,0,n){
            cin>>s;
            v.pb(s);
            mp[s]++;
        }
    }
    int x1 = 0;
    int x2 = 3*n;
    string s1 ="";
    fi(i,0,3){
        int cnt =0;
        fi(j,0,n){
            s1= v[x1];
            x1++;
            if(mp[s1]>=3)cnt+=0;
            else if(mp[s1]==2)cnt+=1;
            else if(mp[s1]==1)cnt+=3;
        }
        cout<<cnt<<" ";
        if(x1==x2){
            break;
        }
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



