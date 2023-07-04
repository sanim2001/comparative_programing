#include <bits/stdc++.h>

#define                 ll long long
#define in(a)           for (auto &x : a) cin >> x;
#define out(a)          for (auto x : a) cout << x << ' ';  cout << endl;
#define loop(i, l, n)   for(int i=(l); i<(n); i++)
#define mod             1000000007
#define whot            cout<<100<<endl
#define f first
#define s second
#define pb push_back
#define mp make_pair



using namespace std;


void solve()
{

    ll n, tem;
    cin>>n;

    int arr[n+1] = {0};


    cout<<2<<endl;
    for(int i=1; i<=n;i++)
    {
        for(int j=i; j<=n; j*=2)
        {
            if(arr[j]==0) cout<<j<<" ";
            arr[j] = 1;
        }
    }
    cout<<endl;
}

int main()
{
    ll t;
    cin>>t;

    while(t--) solve();
}
