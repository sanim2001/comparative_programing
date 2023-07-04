#include<bits/stdc++.h>
using namespace std;

int tmp[100000];

void  Complex(int a[],int n,int k){

    int a1[n],a2[n];
    a1[0] = 0;
    a2[0] = 0;


    for(int j=1; j<=n; j++){
        int mini=INT_MAX;
        int coin=0;

        for(int i=1; i<=k; i++){
            if(j>= a[i]){
                if((1+a1[j-a[i]]) < mini){
                    mini = 1+a1[j-a[i]];
                    coin = i;
                }
            }
        }
        a1[j]=mini;
        a2[j]=coin;
    }

    int l = n;
    while(l>0){

        tmp[a[a2[l]]]++;
        l=l-a[a2[l]];
    }

    for(int i=0; i<10000; i++){
        if(tmp[i]>0){
            cout<<i<<" "<<tmp[i]<<endl;
        }
    }

}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    Complex (a,k,n);
    return 0;
}
