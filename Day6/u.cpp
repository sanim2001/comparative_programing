#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    int a = (int)n;
    if((n-a)==0){
        cout<<"int "<<a;
    }
    else{
        cout<<"float "<<a<<" "<<n-a;
    }
}
