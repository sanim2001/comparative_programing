#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum,dif,tem;
    int t, i, j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        sum=0;
        for(j=1; j<=12; j++)
        {
            cin>>n;
            sum+=n;
        }
        sum=sum/12.00;
        if(sum>=1000)
        {
            tem=(int)(sum/1000.00);
            dif=sum-(1000*tem);
            printf("%d $%.0lf,%.2lf\n",i,tem,dif);
        }
        else
        {
            printf("%d $%.2lf\n",i,sum);
        }
    }
    return 0;
}
