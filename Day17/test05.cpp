#include<bits/stdc++.h>
using namespace std;


int main(){
   int n = 3;
   int a[3];
   for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // 99 99 98
    sort(a,a+n);
    //98 99 99
    cout<<a[1]+a[2]<<endl;
}


