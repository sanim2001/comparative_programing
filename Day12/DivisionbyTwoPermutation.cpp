#include<bits/stdc++.h>
using namespace std;


void division(){
    int n,flag=0;
    cin>>n;
    map<int,int>m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        int j=a[i];
        while(j>0){
            if(j>=1 && j<=n && m[j]==0){
                m[j]=1;
                break;
            }
            j/=2;
        }
    }
    for(int i=1; i<=n; i++){
        if(m[i]!=1){
             flag=1;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        division();
    }
}
