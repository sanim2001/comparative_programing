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
#define     yes               "YES\n"
#define     no                "NO\n"





using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int>vec;
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(all(vec));
    for(auto i=vec.end(); i!=vec.begin(); i--){
        sum+=*i;

    }
    cout<<sum<<"\n";
}


