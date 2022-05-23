#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int x = pow(a,b);
    long long int y = pow(c,d);
    cout<<x<<" "<<y;
    if(x<y){
        cout<<"NO";
    }
    else if(x>y){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}

