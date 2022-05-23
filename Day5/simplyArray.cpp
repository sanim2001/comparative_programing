#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]{0};
    int b;
    for(int i=0; i<10; i++){
        cin>>b;
        a[b-1]++;
    }
    int maximum=0;
    for(int i=0; i<10; i++){
        if(maximum<a[i]){
            maximum = a[i];
        }
    }
    for(int i=0; i<10; i++){
        if(maximum==a[i]){
            cout<<maximum<<endl;
        }
    }

}
