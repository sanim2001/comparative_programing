#include<bits/stdc++.h>
#define     f                 first
#define     s                 second
#define     pb                push_back
#define     all(x)            x.begin(),x.end()
#define     fi(i,a,b)         for(int i=a;i<b;i++)
#define     ri(i,b,a)         for(int i=b;i>=a;i--)
#define     N                 (int)(1e9 + 7)
#define     gcd(a,b)          __gcd(a,b)
#define     yes               cout<<"YES\n"
#define     no                cout<<"NO\n"
#define     nl                "\n"
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,c=1,p=1,l;
    cin>>t;
    ll a[t];
    fi(i,0,t) cin>>a[i];

    sort(a,a+t);

    for(int i=0;i<t-1; i=i+2)
    {
        if(i<t-1 && a[i+1]>a[i])
        {
            swap(a[i],a[i+1]);
        }
        if(i<t-1 && a[i-1]>a[i])
        {
            swap(a[i],a[i+1]);
        }
    }
    for(int i=1;i<t-1; i=i+2)
    {
        if(i<t-1 && a[i+1]>a[i])
        {
            swap(a[i],a[i+1]);
        }
        if(i<t-1 && a[i-1]>a[i])
        {
            swap(a[i],a[i+1]);
        }
    }
    for(int i=1;i<t-1; i=i+2)
    {
        if(a[i]<a[t-i] && a[i]<a[t-i-2] && a[t-i-1]>a[i-1] && a[t-i-1]>a[i+1] && t%2==0)
        {
            swap(a[i],a[t-i-1]);
        }
    }
    for(int i=1;i<t-1; i=i+2)
    {
        if(a[i]<a[t-i-1] && a[i-1]<a[t-i] && a[t-i]>a[i+1]&& t%2==1)
        {
            swap(a[i],a[t-i]);
        }
    }
    for(int i=1;i<t-1; i=i+2)
    {
        if(a[i-1]>a[t-i] && a[i-1]<a[t-i-2] && t%2==1 && a[i]>a[t-i-1])
        {
            swap(a[i-1],a[t-i-1]);
        }
    }
    for(int i=1;i<t-1; i=i+2)
    {
        if(a[i-1]<a[t-i] && a[i-1]<a[t-i-2] && t%2==0 && a[i]>a[t-i-1])
        {
            swap(a[i-1],a[t-i-1]);
        }
    }

    fi(i,0,t-1){
        if(a[i]==a[i+1] || i%2==1 && a[i]<a[i-1] || i%2==0 && a[i]>a[i+1]){
            cout<<-1<<"\n";
            exit(0);
        }
    }
    fi(i,0,t) cout<<a[i]<<" ";
    cout<<"\n";

}
/*
10
1 5 7 1 5 7 1 5 7 7

4
1 2 2 3

7
3 3 4 4 4 5 5

6
3 3 4 4 5 5

5
1 2 3 4 1






*/
