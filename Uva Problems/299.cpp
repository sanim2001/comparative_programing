#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[j]<a[i]){
                    swap(a[j],a[i]);
                    c++;
                }
            }
        }
        //cout<<c<<"\n";
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<"\n";

    }
}
