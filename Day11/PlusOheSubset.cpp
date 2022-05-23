#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t,n;
    cin>>t;

    while(t--){
        int minn=INT_MAX;
        int maxx=INT_MIN;
        cin>>n;
        int a[n];

            for(int i=0; i<n; i++){
                cin>>a[i];
            }
            for(int i=0; i<n; i++){
                minn=min(minn,a[i]);
                maxx=max(maxx,a[i]);
            }
            cout<<maxx-minn<<endl;

    }
}



