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
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(s[0]=='a'){
        cout<<"aa"<<"\n";
    }
    else if(s[0]==s[1]){
        cout<<s[0]<<s[1]<<"\n";
    }
    else{
        string s1;
        s1+=s[0];
        for(int i=1; i<s.size(); i++){
            if(s[i]<=s[i-1]){
                s1+=s[i];
            }
            else{
                break;
            }

        }
        string s2;
        for(int i=s1.size()-1; i>=0; i--){
            s2+=s[i];
        }
        cout<<s1<<s2<<"\n";
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

