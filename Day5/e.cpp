#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum =0 ;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                for(int k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            c++;
        }
    }
    for(int i=0; i<c; i++){
        sum = sum + (a[i]*10);
    }
    cout<<sum;
}

