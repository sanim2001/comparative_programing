#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[12]={3,5,7,11,13,17,19,23,29,31,37,41};
    int t;
    cin>>t;

    while(t--){
        int n,a,b,c;
        cin>>n;
        if(n & 1){
            n--;
            c=1;
            int x,y;
            for(int i=0; i<12; i++){
                x=arr[i];
                y=n-x;
                if(__gcd(x,y)==c){
                    a=x;
                    b=y;
                    break;
                }
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<2<<" "<<n-3<<" "<<1<<endl;
        }
    }
}
