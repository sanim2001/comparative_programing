#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int a,b,c;
    long long int p=0,q=0;
    int s=1;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a==b && b==c && a==b){
            cout<<s<<" "<<s<<" "<<s<<endl;
        }
        else if(a==b && b>c){
            //p = (a-b)+1;
            q = (a-c)+1;
            cout<<s<<" "<<s<<" "<<q<<endl;
        }

        else if(b==c && b>a){
            //p = (a-b)+1;
            q = (b-a)+1;
            cout<<q<<" "<<s<<" "<<s<<endl;
        }
        else if(a==c && a>b){
            //p = (a-b)+1;
            q = (a-b)+1;
            cout<<s<<" "<<q<<" "<<s<<endl;
        }
        else if(a>=b && a>=c){
            p = (a-b)+1;
            q = (a-c)+1;
            cout<<0<<" "<<p<<" "<<q<<endl;
        }
        else if(b>=a && b>=c){
            p = (b-a)+1;
            q = (b-c)+1;
            cout<<p<<" "<<0<<" "<<q<<endl;
        }
        else if(c>=a && c>=b){
            p = (c-a)+1;
            q = (c-b)+1;
            cout<<p<<" "<<q<<" "<<0<<endl;
        }

    }
}
