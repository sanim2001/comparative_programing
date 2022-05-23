#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    for(int i=1; i<=x; i++){
        long double sum=0,a[12],ans=0,tem=0,tem2=0;
        for(int i=0; i<12; i++){
            cin>>a[i];
            sum+=a[i];
        }
        ans=sum/12.00;
        if(ans<1000){
            cout<<fixed<<setprecision(2);
            cout<<i<<" $"<<ans<<"\n";
        }

        else{
            tem=(int)ans/1000;
            tem2=ans-(tem*1000);
            cout<<i<<" $"<<(int)tem;
            cout<<fixed<<setprecision(2);
            cout<<","<<round(tem2)<<"\n";
        }
    }
}


