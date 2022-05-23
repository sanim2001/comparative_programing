#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int u=0,l=0;
    for(int i=0; i<n.size(); i++){
        if(n[i]>='A' && n[i]<='Z'){
            u++;
        }else{
        l++;
        }
    }
    int maxx=max(u,l);
    if(maxx==u && u!=l){
        for(int i=0; i<n.size(); i++){
            n[i]=toupper(n[i]);
        }
    }else{
        for(int i=0; i<n.size(); i++){
            n[i]=tolower(n[i]);
        }
    }
    for(int i=0; i<n.size(); i++){
        cout<<n[i];
    }

}
