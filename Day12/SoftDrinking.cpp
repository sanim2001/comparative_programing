#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;;

    int drink=k*l;
    int toasts=drink/nl;
    int limit=c*d;
    int salt=p/np;
    int minn = min(min(toasts,limit),salt);
    cout<<minn/n;
}

