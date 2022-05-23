#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin>>n;
    vector<int> Vec;
    while(n>0){

        Vec.push_back(n%2);
        n/=2;
    }
    for(int i=Vec.size()-1; i>=0; i--){
        cout<<Vec.at(i);
    }

}
