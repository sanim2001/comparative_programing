#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[4000],item[4000],i,j,diff=0;
    while(cin>>n)==1)
    {
//        for(i=1;i<=n;i++)
//            arr[i]=0;
        arr[n]{0};
        for(i=1;i<=n;i++)
            scanf("%d",&item[i]);
        if(n!=1)
        {
            for(i=1;i<n;i++)
            {
                diff=abs(item[i]-item[i+1]);
                if(arr[diff]==0)
                    arr[diff]=1;
                else
                {
                    printf("Not jolly\n");
                    break;
                }
                if(i==(n-1))
                {
                    for(j=1;j<n;j++)
                    {
                        if(arr[j]==0)
                        {
                            printf("Not jolly\n");
                            break;
                        }
                        else if(j==(n-1))
                            printf("Jolly\n");
                    }
                }
            }
        }
        else
            printf("Jolly\n");
    }

    return 0;
}
