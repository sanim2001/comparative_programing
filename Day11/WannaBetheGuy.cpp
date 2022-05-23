#include<bits/stdc++.h>
using namespace std;

int main(){
    int level;
    cin>>level;
    int p,q,c=0;

    cin>>p;
    int a[500];
    for(int i=0; i<p; i++){
        cin>>a[i];
    }


    cin>>q;
    for(int i=p; i<p+q; i++){
        cin>>a[i];
    }
    sort(a,a+(p+q));
    for(int i=0; i<p+q; i++){
        if(a[i]!=a[i+1]){
            c++;
        }
    }
    if(c==level)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

}
