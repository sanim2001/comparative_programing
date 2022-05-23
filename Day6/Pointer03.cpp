#include<bits/stdc++.h>
using namespace std;


void swap1(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
    cout<<*p<<" "<<*q;
}

int main(){
    int x=10,y=20;
    int *p = &x;
    int *q;
    int *r = &y;

    q= p;
    *q = 15;
    cout<<x<<" "<<y<<" "<<*p<<" "<<*q<<" "<<*r<<endl;
    *p =*r;
    cout<<x<<" "<<y<<" "<<*p<<" "<<*q<<" "<<*r<<endl;


    int a=2, b=3;
    swap1(&a,&b);

    cout<<endl;
    int arr[4] = {1,2,3,4},*parr = arr;

    for(int i=0; i<4; i++){
        cout<<*(parr+i)<<endl;
    }
}

