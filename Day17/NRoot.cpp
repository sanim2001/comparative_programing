#include<bits/stdc++.h>
using namespace std;
double N = 1e-7;
int main(){
    double x;
    cin>>x;
    double lo = 1, hi=x, mid;
    while(hi-lo>N){
        mid= (hi+lo)/2;
        if(mid*mid<x) lo=mid;
        else hi=mid;
    }
    cout<<lo<<"\n";
}
