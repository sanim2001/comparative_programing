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
    int n;
    cin>>n;
    int x=-1,y=-1,last=-1,flag=0;
    vector<int>a(n);
    fi(i,0,n) cin>>a[i];
    fi(i,0,n){
        if(a[i]!=i+1){
            x=i+1;//value
            y=i;//index
            flag=1;
            break;
        }

    }
    if(flag==0){
        fi(i,0,n) cout<<a[i]<<" ";
    }
    else{
        fi(i,0,n){
            if(a[i]==x){
                last=i;
                break;
            }
        }
        reverse(a.begin()+y,a.begin()+last+1);
        fi(i,0,n) cout<<a[i]<<" ";
    }

    cout<<nl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}


