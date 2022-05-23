#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
        }
    }
    int i1,j1;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j]==1){
                i1=i;
                j1=j;
            }
        }
    }
    int dis= abs(2-i1)+abs(2-j1);

    cout<<dis<<endl;

}
