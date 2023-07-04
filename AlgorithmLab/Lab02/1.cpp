#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int sum=0,num=0;
    for(int i=n-1; i>=0; i--){
        while(k>=a[i]){
            k-=a[i];
            sum++;
        }
    }
    cout<<sum<<endl;
}
