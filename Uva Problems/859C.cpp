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
    string s;
    cin>>s;
    char p;
    char k ='0';
    string s1 = s;
    fi(i,0,n){
        if(s[i-1]=='0' and i>0)k ='1';
        else if(s[i-1]=='1' and i>0)k ='0';
        p = s[i];
        fi(j,i,n){
            if(p==s1[j]){
                s[j]=k;
            }
        }
    }
    fi(i,0,s.size()-1){
        if(s[i]==s[i+1]){
            no;
            return;
        }
    }
    yes;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



