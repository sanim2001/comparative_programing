#include<bits/stdc++.h>
using namespace std;

int main(){

    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            if(i<2)cout<<"1\n";
            if(i>1 && i<3){
                cout<<"1 1\n";
            }
            if(i>2){
                cout<<"1 ";
                for(int k = 2; k<i; k++){
                    cout<<"0 ";
                }
                cout<<"1"<<"\n";
            }
        }

    }
}
