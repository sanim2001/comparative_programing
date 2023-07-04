#include<bits/stdc++.h>
using namespace std;

#define fi(i,a,b) for(int i=a; i<b; i++)
#define ll long long
void solve(){

}
int main(){
    ll n,t;
    cin>>n>>t;
    ll a[n],b[n];
    fi(i,0,n)cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    fi(i,1,n)a[i]+=a[i-1];

    while(t--){
        int x,y;
        cin>>x>>y;
        x--,y--;
        if(x==y){
          cout<<a[x]<<"\n";
          continue;
        }
        else{
          ll sum =a[x]-a[x-y-1];
          cout<<sum<<"\n";
        }

    }
}

