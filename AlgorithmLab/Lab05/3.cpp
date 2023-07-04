#include<bits/stdc++.h>
using namespace std;


int dp[10007][10007];
int matrix_chain(int p[], int n) {

    for(int i=1; i<n; i++) dp[i][i] = 0;


    int cnt=0;
    for(int x=2; x<n; x++){
        for(int i=1; i<n-x+1; i++){

            int j = i+x-1;
            dp[i][j] = INT_MAX;

            for (int k=i; k < j; k++){
                cnt = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
                if (dp[i][j]>cnt){
                    dp[i][j] = cnt;
                }
            }
        }
    }

    return dp[1][n-1];
}

int main()
{
    int n,m,p;
    cin>>p;
    m=p*2;

    int arr[m];
    for(int i=1;i<=m;i++){
        cin>>arr[i];
    }
    n=p+1;
    int k=0, a[n];
    for(int i=1;i<=m;i++){
        if(i%2!=0 || i==m)a[k]=arr[i],k++;
    }
    cout <<matrix_chain(a, n);
    return 0;
}
