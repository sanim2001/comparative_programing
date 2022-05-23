#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n, int x){
    int i=0;
    int j=n-1;
    while(i<j){
        int mid= arr[i]+arr[j];
        if(mid==x) return true;
        if(mid>x) j--;
        else i++;
    }

}
int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        int x;
        cin>>x;
        bool ans = solve(a,n,x);
        if(!ans) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }

}
