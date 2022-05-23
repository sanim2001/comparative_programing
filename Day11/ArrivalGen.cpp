#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,indM=0,indN=0;
    int maxx=INT_MIN;
    int minn=INT_MAX;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(a>maxx){
            indM=i;
            maxx=a;
        }
        if(a<=minn){
            indN=i;
            minn=a;
        }
    }
    if(indM>indN)
        cout<<(indM-1)+(n-indN)-1;
    else
        cout<<(indM-1)+(n-indN);
}
