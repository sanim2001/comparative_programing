#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,m,p;
    cin>>n>>m;
    if(n%2){
        p = (n/2)+1;
    }
    else{
        p = n/2;
    }
    if(m <=p) cout <<(2*m-1);
    else{
        m = m-p;
        cout << 2*m;
    }
}
