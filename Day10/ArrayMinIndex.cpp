#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    int ind[n];
    for(int i=0; i<n;i++){
        ind[a[i]]=-1;
    }
    for(int i=0; i<n;i++){
        if(ind[a[i]]!=-1){

        }else{
            ind[a[i]]=i;
        }
    }
    for(int i=0; i<n;i++){
        cout<<ind[a[i]];
    }
}
