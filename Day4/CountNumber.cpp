#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1]{0};
    int count[n+1]{0};
    for(int i=0; i<n; i++){
        cin>>a[i];
        count[a[i]]++;
    }
    for(int i=0; i<n; i++){
        cout<<i+1<<" "<<count[i+1]<<endl;
    }
    return 0;
}
