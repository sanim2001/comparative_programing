#include<bits/stdc++.h>
using namespace std;
int dp[100][100] ;


int lcs(char x[], char y[], int n, int m){

    if(n == 0 || m == 0){
        return 0 ;
    }
    if(dp[n][m] != -1) return dp[n][m] ;

    if(x[n-1] == y[m-1]){
        return dp[n][m] = 1+lcs(x, y, n-1, m-1) ;

    }
    else if (x[n-1] != y[m-1]) return dp[n][m] = max(lcs(x, y, n, m-1), lcs(x, y, n-1, m)) ;
}
void lcs1(char* X, char* Y, int m, int n){
    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }


    int idx = L[m][n];


    char lcs[idx + 1];
    lcs[idx] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[idx - 1] = X[i - 1];
            i--,j--,idx--;
        }
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    cout << lcs<<endl;
}
int main()
{
    char x[10007], y[10007] ;
    int n, m;
    gets(x) ;
    gets(y) ;

    n = strlen(x) ;
    m = strlen(y) ;
    memset(dp, -1, sizeof(dp)) ;
    int len = lcs(x, y, n, m) ;
    cout<<len<<endl;
    m = strlen(x) ;
    n = strlen(y) ;
    lcs1(x, y, m, n);
    return 0;
}


