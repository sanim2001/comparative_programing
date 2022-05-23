#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b.size();i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
#define     deb(x)            cerr<<(#x)<<" = "<<x<<"\n"
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
void solve(){
    string s;
    cin>>s;
    map<char, int> mp;
    fi(i,0,s) mp[s[i]]++;
    ll c=0;
    fi(i,0,s){
        if(mp[s[i]]>1){
            mp[s[i]]--;
        }else{
            c=i;
            break;
        }
    }
    fi(i,c,s) cout<<s[i];
    cout<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
/*
for(int i = 0; i < n; i++) {
		if(i == last[s[i]]) {
			cout << s.substr(i) << nl;
			return;
		}
	}
*/



