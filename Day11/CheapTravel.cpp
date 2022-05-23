#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,rem,price,sum=0,c=0;
    cin>>n>>m>>a>>b;

    while(n>=sum){
        sum=sum+m;
        c++;
    }
    //cout<<c;
    rem= (c*m)-n;
    if(m*a<=b){
        price = n*a;
        cout<<price;
    }else{
        price = (n/m)*b;
        cout<<price+min((n%m)*a,b);
    }



}

