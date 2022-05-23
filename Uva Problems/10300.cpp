#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    while(x--){
        int n;
        cin>>n;
        int a,b,c,sum=0;
        while(n--){
            cin>>a>>b>>c;
            sum+=a*c;
        }
        cout<<sum<<"\n";
        sum=0;
    }
}

