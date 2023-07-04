#include<bits/stdc++.h>
using namespace std;


#define fi(i,a,b) for(int i=a; i<b; i++)
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    fi(i,0,n) cin>>a[i];
    if(n==1){
        cout<<-1<<"\n";
        return;
    }
    fi(i,0,n){
        b[i]=i+1;
    }
    fi(i,0,n){
        if(a[i]==b[i]){
            if(i<n-1){
                swap(b[i],b[i+1]);
            }
            else{
                swap(b[i],b[i-1]);
            }
        }
    }
    fi(i,0,n){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
}
