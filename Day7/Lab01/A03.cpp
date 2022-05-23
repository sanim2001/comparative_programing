#include<bits/stdc++.h>
using namespace std;

struct primeNum{
    int range1,range2;
    int counter;
    int *num;
};


int* primeArray(primeNum p){
    p.counter = 0;
    p.num = new int[p.range2-p.range1];
    for( int i = p.range1 ; i < p.range2 ; i++){
        int c = 0;
        for( int j = 2 ; j < i ; j++ ){
            if( i % j == 0){
                c++;
                break;
            }
        }
        if( c == 0 ){
            p.num[p.counter] = i;
            p.counter++;
        }
    }
    return p.num;
}
int main(){

    primeNum n;
    cin >> n.range1>> n.range2;
    int* totalPrime;
    totalPrime = primeArray(n);
    for( int i = 0;;i++ ){
        if(*(totalPrime+i)>n.range1 && n.range2>*(totalPrime+i)){
            cout << *(totalPrime+i) <<" ";
        }
    }
    return 0;
}

