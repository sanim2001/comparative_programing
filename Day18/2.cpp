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
int i=1;
void solve(){
    int n;
    cin>>n;
    while(n--){
        string s;
        std::getline( std::cin >> std::ws, s);
        int S=0,E=0,L=0,I=0,s1=0,e=0,l=0,i1=0,d=0,g=0,t=0,a=0,p=0,f=0,o=0,r=0,m=0;
        fi(i,0,s.size()){
            if(s[i]=='s') s1++;
            else if(s[i]=='e')e++;
            else if(s[i]=='l')l++;
            else if(s[i]=='i')i1++;
            else if(s[i]=='D')d++;
            else if(s[i]=='g')g++;
            else if(s[i]=='t')t++;
            else if(s[i]=='a')a++;
            else if(s[i]=='P')p++;
            else if(s[i]=='f')f++;
            else if(s[i]=='o')o++;
            else if(s[i]=='r')r++;
            else if(s[i]=='m')m++;
            else if(s[i]=='S')S++;
            else if(s[i]=='E')E++;
            else if(s[i]=='L')L++;
            else if(s[i]=='I')I++;
        }
        if(S>=4 and E>=4 and L>=2 and I>=2 and d>=1 &&i1>=2 &&g>=1 &&t>=2 &&a>=2 &&p>=1 &&f>=1 &&o>=1 &&r>=1 &&m>=1 &&s1>=1 && l>=2){
            cout<<"Case "<<i<<": "<<"BOTH"<<nl;
        }
        else if(S>=2 and E>=2 and L>=1 and I>=1 and (d<1 || i1<2 || g<1 || t<2 || a<2 || p<1 || f<1 || o<1 || r<1 || m<1 || s1<1 || l<2)){
            cout<<"Case "<<i<<": "<<"SELISE"<<nl;
        }
        else if(d>=1 &&i1>=2 &&g>=1 &&t>=2 &&a>=2 &&p>=1 &&f>=1 &&o>=1 &&r>=1 &&m>=1 &&s1>=1&& l>=2 and S>=2 and E>=2 and L>=1 and I>=1){
            cout<<"Case "<<i<<": "<<"SELISE Digital Platforms"<<nl;
        }
        else{
            cout<<"Case "<<i<<": "<<"NONE"<<nl;
        }
        i++;
    }

}

int main(){
   // ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}



