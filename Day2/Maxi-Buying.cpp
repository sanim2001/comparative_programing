#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum = n*1.08;
    if(sum>206){
        cout<<":(";
    }
    else if(sum<206){
        cout<<"Yay!";
    }
    else if(sum==206){
        cout<<"so-so";
    }
    return 0;
}
