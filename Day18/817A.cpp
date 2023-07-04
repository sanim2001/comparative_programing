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
    int t=0,i=0,m=0,u=0,r=0,o=0;
    int n;
    string s;
    cin>>n>>s;
    fi(k,0,s.size()){
        if(s[k]=='T')t++;
        else if(s[k]=='i')i++;
        else if(s[k]=='m')m++;
        else if(s[k]=='u')u++;
        else if(s[k]=='r')r++;
        else o++;

    }
    if(t==1 and i==1 and m==1 and u==1 and r==1 and o==0)yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}



