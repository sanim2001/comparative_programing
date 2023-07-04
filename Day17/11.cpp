#include <bits/stdc++.h>
using namespace std ;
void solve()
{
    int n,k;
    int cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    if(k==1)
    {
        cout<< ((n-1)/2)<<endl;
    }
    else
    {
        for(int i=1; i<n-1; i++)
        {
            if (a[i]==a[i-1]+a[i+1])
            {
               continue;
            }
            else if(a[i]>a[i-1]+a[i+1]){
                cnt++;
            }

        }
        cout<< cnt <<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
