#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int ans=99999;
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                ans=min(ans,a[i]+b[i]);
            }
            else
            {
                ans=min(ans,max(a[i],b[j]));
            }
        }
    }
    cout<<ans;
    return 0;
}
