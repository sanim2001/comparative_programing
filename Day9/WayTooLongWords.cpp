#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    string a,b;
    while(n--){
        string n;
        cin>>n;
        if(n.size()>10){
            for(int i=0; i<n.size(); i++){
                if(i==0){
                    a=n[i];
                }
                else if(i==n.size()-1){
                    b=n[i];
                }
                else{
                    c++;
                }
            }
            cout<<a<<c<<b<<endl;
            c=0;
        }
        else{
            cout<<n<<endl;
        }
    }

}
