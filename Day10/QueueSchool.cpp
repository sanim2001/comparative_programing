#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,q;
    string n;

    cin>>p>>q>>n;
    for(int k=0; k<q; k++){
       for(int i=0; i<n.size()-1; i++){
            if(n[i]=='B' && n[i+1]=='G'){
                n[i]='G';
                n[i+1]='B';
                i++;
            }
       }
    }
    cout<<n<<endl;



}
