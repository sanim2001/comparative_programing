#include<bits/stdc++.h>
using namespace std;
int main(){
    int s=3;
    int n[s];
    for(int i=0;i<s;i++){
        cin>>n[i];
    }
    int a[3];
    for(int i=0;i<3;i++){
        a[i]=n[i];
    }
    sort(n,n+s);
    for(int i=0;i<s;i++){
        cout<<n[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }

}
