
#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,t,s,d;
    cin>>v>>t>>s>>d;
    int rem;
    if(t>s){
        rem =t;
        t = s;
        s = rem;
    }
    int dis = v*t, dis2= v*s;
    if(d<dis || d>dis2)
        cout<<"Yes";
    else
        cout<<"No";

}
