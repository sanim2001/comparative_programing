#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;

#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     fe(a)             for(auto &e : a)
#define     fr(i,n)           for(int i=0;i<n;i++)
#define     vt                vector<int>
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"

using namespace std;
void solve(){

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y;
    cin>>x>>y;

    if(x==0 && y==1 ||x==1 && y==0){
        cout<<2;
    }
    else if(x==1 && y==2 ||x==2 && y==1){
        cout<<0;
    }
    else if(x==0 && y==2 ||x==2 && y==0){
        cout<<1;
    }
    else if(x==0 && y==0){
        cout<<0;
    }
    else if(x==1 && y==1){
        cout<<1;
    }
    else if(x==2 && y==2){
        cout<<2;
    }



}


