#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int k){
   if (k == 0) return 0;
   int res = INT_MAX;

   for (int i=0; i<m; i++){
     if (coins[i] <= k){
         int x = minCoins(coins, m, k-coins[i]);
         if (x != INT_MAX and x+1<res)
            res= x + 1;
     }
   }
   return res;
}

int main()
{
    int N;
    cin>>N;
    int k;
    cin>>k;
    int a[N];
    for(int i=0; i<N; i++)cin>>a[i];
    int ans = minCoins(a, N, k);
    cout <<ans<<endl;
    return 0;
}
