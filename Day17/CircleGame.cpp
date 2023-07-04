#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
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
int j=1;
void solve(){
    int n;
    cin>>n;
    int a[n];
    fi(i,1,n+1) cin>>a[i];
    if(n&1){
        cout<<"Mike\n";
        return;
    }
    else{
        vector<int>p,q;
        fi(i,1,n+1){
            if(i&1)p.pb(a[i]);
            else q.pb(a[i]);
        }
        int x= *min_element(all(p));
        int ind1= min_element(all(p))-p.begin();
        int y= *min_element(all(q));
        int ind2= min_element(all(q))-q.begin();
        //ind1++,ind2++;
        if(x>y){
            cout<<"Mike\n";
            return;
        }
        //cout<<"DDDDDDD";
        //deb(ind1);
        //deb(ind2);
        if(x<y){
            cout<<"Joe\n";
            return;
        }
        if(ind1>ind2)cout<<"Mike\n";
        else cout<<"Joe\n";
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





