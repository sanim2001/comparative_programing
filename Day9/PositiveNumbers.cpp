#include<bits/stdc++.h>
using namespace std;
int main(){
    float n[6];
    for(int i=0; i<6; i++){
        cin>>n[i];
    }
    int c=0;
    for(int i=0; i<6; i++){
        if(n[i]>0){
            c++;
        }
    }
    cout<<c<<" "<<"valores positivos"<<endl;
}
