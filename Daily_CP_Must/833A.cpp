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
#define     pr(x)             cout<<x<<"\n"
#define     out(a)            for(auto &x : a) cout<<x<<" "
#define     ll                long long int
#define     ld                long double
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     lcm(a,b)          (a*(b/gcd(a,b)))
using namespace std;
const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
ll gcd(ll a,ll b){
    if(b==0)return a;
    else gcd(b, a%b);
}

void solve(){
    string s[3];
    fi(i,0,3){
        cin>>s[i];
    }
    if(s[0][0]==s[0][1] and s[0][1]==s[0][2] and s[0][0]=='X')pr("X");
    else if(s[1][0]==s[1][1] and s[1][1]==s[1][2] and s[1][0]=='X')pr("X");
    else if(s[2][0]==s[2][1] and s[2][1]==s[2][2] and s[2][0]=='X')pr("X");

    else if(s[0][0]==s[1][0] and s[1][0]==s[2][0] and s[0][0]=='X')pr("X");
    else if(s[0][1]==s[1][1] and s[1][1]==s[2][1] and s[0][1]=='X')pr("X");
    else if(s[0][2]==s[1][2] and s[1][2]==s[2][2] and s[0][2]=='X')pr("X");

    else if(s[0][0]==s[1][1] and s[1][1]==s[2][2] and s[2][2]=='X')pr("X");
    else if(s[0][2]==s[1][1] and s[1][1]==s[2][0] and s[0][2]=='X')pr("X");




    else if(s[0][0]==s[0][1] and s[0][1]==s[0][2] and s[0][0]=='O')pr("O");
    else if(s[1][0]==s[1][1] and s[1][1]==s[1][2] and s[1][0]=='O')pr("O");
    else if(s[2][0]==s[2][1] and s[2][1]==s[2][2] and s[2][0]=='O')pr("O");

    else if(s[0][0]==s[1][0] and s[1][0]==s[2][0] and s[0][0]=='O')pr("O");
    else if(s[0][1]==s[1][1] and s[1][1]==s[2][1] and s[0][1]=='O')pr("O");
    else if(s[0][2]==s[1][2] and s[1][2]==s[2][2] and s[0][2]=='O')pr("O");

    else if(s[0][0]==s[1][1] and s[1][1]==s[2][2] and s[2][2]=='O')pr("O");
    else if(s[0][2]==s[1][1] and s[1][1]==s[2][0] and s[0][2]=='O')pr("O");



    else if(s[0][0]==s[0][1] and s[0][1]==s[0][2] and s[0][0]=='+')pr("+");
    else if(s[1][0]==s[1][1] and s[1][1]==s[1][2] and s[1][0]=='+')pr("+");
    else if(s[2][0]==s[2][1] and s[2][1]==s[2][2] and s[2][0]=='+')pr("+");

    else if(s[0][0]==s[1][0] and s[1][0]==s[2][0] and s[0][0]=='+')pr("+");
    else if(s[0][1]==s[1][1] and s[1][1]==s[2][1] and s[0][1]=='+')pr("+");
    else if(s[0][2]==s[1][2] and s[1][2]==s[2][2] and s[0][2]=='+')pr("+");

    else if(s[0][0]==s[1][1] and s[1][1]==s[2][2] and s[2][2]=='+')pr("+");
    else if(s[0][2]==s[1][1] and s[1][1]==s[2][0] and s[0][2]=='+')pr("+");

    else{
        pr("DRAW");
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



