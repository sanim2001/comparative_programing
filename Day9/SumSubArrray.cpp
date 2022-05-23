#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // 1 2 2
    int curr=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n;j++){
            curr+=a[j]; //5+4+2
        }

    }
    cout<<"Total: "<<curr<<endl;

}
