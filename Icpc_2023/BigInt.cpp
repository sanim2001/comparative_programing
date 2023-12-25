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
#define     pr(x)             cout<<x<<"\n"
#define     trans(s)          transform(s.begin(), s.end(), s.begin(), ::tolower);
#define     out(a)            for(auto &x : a) cout<<x<<" "
typedef long long int ll;
typedef long double ld;
using namespace std;
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

const long long mod = 1e9 + 7;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,+1,-1,1};
void init_code(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int charToD(char digit){
	return digit - '0';
}
char digitToC(int ch){
	return ch + '0';
}
string addNum(string s1, string s2){
	if(s1.size()>s2.size()){
		swap(s1,s2);
	}
	string result ="";
	int carry =0;
	reverse(all(s1));
	reverse(all(s2));
	fi(i,0,s1.size()){
		int d1 = charToD(s1[i]);
		int d2 = charToD(s2[i]);
		int sum = d1+d2+carry;
		int output = sum%10;
		carry = sum/10;
		result.pb(digitToC(output));
	}
	fi(i,s1.size(),s2.size()){
		int d1 = charToD(s2[i]);
		int sum = d1+carry;
		int output = sum%10;
		carry = sum/10;
		result.pb(digitToC(output));
	}
	if(carry)result.pb('1');
	reverse(all(result));
	return result;
}

void solve(){
    string s1,s2;
    cin>>s1>>s2;

    string result = addNum(s1,s2);
    pr(result);
}

int main(){
    init_code();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

}


