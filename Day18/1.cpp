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
void sort(map<string, int>& M){


    multimap<int, string> MM;
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
    int i=0;
    cout<<"Selise Coding Challenge 2023 Winners"<<nl;
    for (auto& it : MM) {
        if(i==0)cout<<"Winner: ";
        if(i==1)cout<<"1st Runner Up: ";
        if(i==2)cout<<"2nd Runner Up: ";

        cout << it.second <<" => "<< it.first << endl;
        i++;
        if(i==3)break;
    }

}
void solve(){
    int n;
    cin>>n;
    map<string,int>mp;
    string s;
    int n1;
    fi(i,0,n){
        cin>>s>>n1;
        mp.insert({s,n1});
    }
    sort(mp);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
        solve();
    }

}



