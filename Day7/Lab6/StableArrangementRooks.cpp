#include<bits/stdc++.h>
using namespace std;
//3 2
//3 3
//1 1
//5 2
//40 33
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0,sum2=0;
        if(n==1 && k==1){
            cout<<"R"<<endl;
        }
        else if(n==k || n<k || k>(n/2)+1){
            cout<<-1<<endl;
        }
        else{
            sum=n/k;
            sum2=sum+k;
            //sum3=n-sum;
            for(int i=1;i<=n;i++){
                for(int j=1; j<=n; j++){
                    if(i<sum || i>sum2){
                        cout<<".";
                    }
                    else{
                        if(sum%2==0){
                            for(int l=sum;l<=sum2;l++){
                            for(int m=1; m<=n; m++){
                                   if(m==1 &&l==sum){
                                    cout<<"R";
                                   }
                            }
                            }
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
}
