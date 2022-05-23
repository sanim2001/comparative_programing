#include<bits/stdc++.h>
using namespace std;

int main(){

    double n,a,sum=0;
    cin>>n;
    double i=n;
    while(n--){
        cin>>a;
        sum+=a;

    }
    cout<<setprecision(12)<<(sum/i);

}


