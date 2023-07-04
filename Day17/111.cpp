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
typedef long long ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){

    int n,s;
    cin>>n>>s;
    int a[n];
    fi(i,0,n)cin>>a[i];

    sort(a,a+n);
    int i=0, j=0, st=0,en=0,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;

    }
    if(sum==s && j-i==3){
        st = i;
        en= j;

    }
    else{
        while(j<n){
            sum+=a[j];
            while(sum>s){
                sum-=a[i];
                i++;
            }
            if(sum==s){
                st = i;
                en=j+1;
                break;
            }
            j++;
        }


    }
    if(en-st==3){
        yes;
        fi(l,st,en){
                cout<<a[l]<<" ";
        }
        cout<<nl;
    }else{
        no;
    }






}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}

