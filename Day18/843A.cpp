#include<bits/stdc++.h>
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
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
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    string s;
    cin>>s;
    int cnt =0;
    fi(i,1,s.size()){
        if(s[i]=='a'){
            cnt = i;
            break;
        }
    }
    if(cnt!=0 and cnt<s.size()-1){
        fi(i,0,cnt)cout<<s[i];
        cout<<" ";
        cout<<s[cnt]<<" ";
        fi(i,cnt+1,s.size())cout<<s[i];
        cout<<nl;
    }
    else{
        cout<<s[0];
        fi(i,1,s.size()){
            if(s[i]=='a'){
                cout<<s[i];
            }
            else{
                cnt =i;
                break;

            }
        }
        cout<<" ";
        fi(i,cnt,s.size()-1)cout<<s[i];
        cout<<" ";
        cout<<s[s.size()-1]<<nl;
    }


}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



