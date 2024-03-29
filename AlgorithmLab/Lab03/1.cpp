#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool> isPrime(N,1);
bool solve(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<N; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<N; j+=i){
                isPrime[j]=false;
            }
        }
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        solve();
        if(isPrime[n]) cout<<"PRIME"<<endl;
        else cout<<"NOT PRIME"<<endl;
    }

}
