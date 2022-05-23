#include<bits/stdc++.h>
using namespace std;


void valueMax(){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //sort(a,a+n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        //sort(b,b+n);

        //for(int i=0; i<n; i++){
        /*if(n==2){
            for(int i=0; i<n; i++){
               swap(a[i],b[n-1]);
               break;
            }
        }*/
        //if(n>2){
            for(int i=0; i<n; i++){
               if(a[i]<b[i]){
                swap(a[i],b[i]);
               }
            }
        /*for(int i=0; i<n; i++){
            cout<<a[i]<<"";
        }for(int i=0; i<n; i++){
             cout<<b[i]<<"";
        }*/

        //}
        int x=INT_MIN;
        int y=INT_MIN;
        int maxa=0,maxb=0;
        for(int i=0; i<n; i++){
            x=max(x,a[i]);
        }
        for(int i=0; i<n; i++){
            y=max(y,b[i]);
        }
        //cout<<maxa<<" "<<maxb<<endl;
        cout<<x*y<<endl;

}
int main(){
    int t;
    cin>>t;

    while(t--){
        valueMax();
    }
}
