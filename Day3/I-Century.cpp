#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    if (n <= 100){
        cout <<1;
    }

    else if (n % 100 == 0){
        cout << n/ 100;
    }

    else{
        cout << n/ 100 + 1;
    }



    return 0;
}
