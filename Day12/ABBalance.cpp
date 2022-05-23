#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
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
    int ab=0,ba=0;
    fi(i,0,s.size()){
        if(s[i]=='a' && s[i+1]=='b'){
            ab++;
        }
        else if(s[i]=='b' && s[i+1]=='a'){
            ba++;
        }
    }
    if(ab==ba){
        cout<<s<<nl;
    }
    if(ab>ba){
            //while(ab>=ba){
               fi(i,0,s.size()-1){
                if(s[i]=='a'){
                    s[i]='b';
                    ba++;
                }
                if(ab==ba){
                    cout<<s<<nl;
                    break;
                }

            //}
        }

    }
    else if(ab<ba){
            fi(i,0,s.size()-1){
                if(s[i]=='b'){
                    s[i]='a';
                    ab++;
                }
                if(ab==ba){
                    cout<<s<<nl;
                    break;
                }

            //}
        }
    }

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}




