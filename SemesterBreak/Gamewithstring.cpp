#include<bits/stdc++.h>
typedef long long ll;

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

    string s;
    cin>>s;
    ll l=s.size();
    vector<int>vec;
    int c=0;
    fi(i,0,l){
        if(!vec.empty() && vec.back()==s[i]){
            c++;
            vec.pop_back();
         }
        else{
            vec.push_back(s[i]);
        }
    }
    if(c%2==0){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }
}


