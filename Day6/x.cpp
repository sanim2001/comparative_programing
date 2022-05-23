#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d && a==d && a==c && b==d){
        cout<<a<<" "<<d;
    }
    else if((b < c) ||  (d < a)){
        cout<<-1;
    }
    else{
        cout<<max(a,c)<<" "<<min(b,d);
    }
}
