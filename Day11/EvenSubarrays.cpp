#include<bits/stdc++.h>
using namespace std;



void valueMax(){
        int n,c=0,sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int i=n-1,x=a[n-1];
        while(i>=0){
            while(a[i]==x && i>=0){
                c++;
                i--;
            }
            if(i<0){
                break;
            }
            sum++;
            i-=c;
            c*=2;
        }
        cout<<sum<<endl;



}
int main(){
    int t;
    cin>>t;

    while(t--){
        valueMax();
    }
}
