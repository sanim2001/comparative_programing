#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int neww=n;
    while(k>0){
        if(neww%10==0){
            k--;//1
            n=n/10;
            neww=n;//51
            //cout<<n<<"A"<<endl;
        }
        else{
            n--;//50
            k--;//2
            neww=n;//510
            //cout<<neww<<endl;
        }
    }
    cout<<neww;
}
