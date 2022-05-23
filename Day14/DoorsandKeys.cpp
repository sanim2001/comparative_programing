#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    string s;
    cin>>s;
    int r=0,g=0,b=0;
    fi(i,0,s.size()){
        if(s[i]=='r'){
            r++;
        }
        else if(s[i]=='R'){
            break;
        }

    }
    fi(i,0,s.size()){
        if(s[i]=='b'){
            b++;
        }
        else if(s[i]=='B'){
            break;
        }

    }
    fi(i,0,s.size()){
        if(s[i]=='g'){
            g++;
        }
        else if(s[i]=='G'){
            break;
        }

    }
    if(r==1 and g==1 and b==1) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




