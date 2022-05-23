#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt =0;
    for(int j=2; j<n; j++){
                if(n%j==0){
                    cnt=1;
                    break;
                }

    }
    if(cnt==0){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}
