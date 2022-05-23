#include<bits/stdc++.h>
using namespace std;

int main(){
    const int N=1e6+2;
    int k,l,m,n,d,c=0,sumk=0,suml=0,summ=0,sumn=0;
    cin>>k>>l>>m>>n>>d;

        if(k==1||l==1||m==1||n==1){
            cout<<d<<endl;
            exit(0);
        }
    int a[d];
    for(int i=1;i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }
    cout<<c;

}
