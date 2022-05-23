#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
void solve(){

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;int c=0;
    getline(cin,str);
    sort(all(str));
    fi(i,0,str.size()-1)
    {
        if(str[i]=='{' || str[i]=='}' || str[i]==' ' || str[i]==',')
        {
            continue;
        }
        else{
            if(str[i]!=str[i+1]){
                c++;
            }
        }
    }
    cout<<c<<nl;


}


