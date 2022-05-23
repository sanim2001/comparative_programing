#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int maxx=max(a,max(b,c));

        if(a+b==c || b+c==a || a+c==b){
            cout<<"YES"<<endl;
        }
        else if(a+b+c==2*maxx){
            cout<<"YES"<<endl;
        }
        else if(a==b && c%2==0 || c==b && a%2==0 || a==c && b%2==0){
            cout<<"YES"<<endl;
        }
        /*else if(maxx==a && b+c>=maxx || maxx==b && a+c>=maxx || maxx==c && b+a>=maxx){
            cout<<"YES"<<endl;
        }*/
        else{
            cout<<"NO"<<endl;
        }
    }

}
