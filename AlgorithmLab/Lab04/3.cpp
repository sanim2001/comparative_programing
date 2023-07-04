#include<bits/stdc++.h>
using namespace std;

int dp[10007][10007] ;


int knapsack(int weight[], int val[] , int cap, int n){

    if(n == 0 || cap == 0) return 0 ;
    if(dp[n][cap] != -1) return dp[n][cap] ;
    if(weight[n] <= cap){
        return dp[n][cap] = max(val[n]+knapsack(weight, val, cap-weight[n], n-1) , knapsack(weight, val, cap, n-1)) ;
    }
    else if(weight[n] > cap){
        return dp[n][cap] = knapsack(weight, val, cap, n-1) ;
    }
}

int main(){

    int weight[100], val[100], cap , i , n ;
    memset(dp, -1, sizeof(dp)) ;

    cin>>n>>cap;
    for(i = 1 ; i <= n ; i++)cin>>val[i];
    for(i = 1 ; i <= n ; i++)cin>>weight[i];

    int profit = knapsack(weight, val, cap, n) ;
    cout<<profit<<"\n";
}



