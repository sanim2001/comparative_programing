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
//transform(s.begin(), s.end(), s.begin(), ::tolower);

void solve(){
    int n,m;
    cin>>n;
    vector<int>a(n);

    fi(i,0,n)cin>>a[i];
    cin>>m;
    vector<int>b(m);
    fi(i,0,m)cin>>b[i];
    int cnt =0;
    sort(all(a));
    sort(all(b));
    if(n>=m){
        fi(i,0,m){
            fi(j,0,n){
                if(abs(b[i]-a[j])<2 && b[i]!=0 && a[j]!=0){
                    b[i]=0;
                    a[j]=0;
                    cnt++;
                }
            }
        }
    }
    else{
        fi(i,0,n){
            fi(j,0,m){
                if(abs(a[i]-b[j])<2 && a[i]!=0 && b[j]!=0){
                    a[i]=0;
                    b[j]=0;
                    cnt++;
                }
            }
        }
    }
    pr(cnt);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



