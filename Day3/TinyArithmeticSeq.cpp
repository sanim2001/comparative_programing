#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int total,total1,total2;
    if(a>=b && a>=c){
        if(b>c){
            total1 = (c-b);
            total2 = (b-a);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
        else{
                //a,c,b
            total1 = (b-c);
            total2 = (c-a);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
    }



    else if(b>=a && b>=c){
        if(a>c){
                //b,a,c
            total1 = (c-a);
            total2 = (a-b);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
        else{
                //b,c,a
            total1 = (a-c);
            total2 = (c-b);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
    }




    else if(c>=a && c>=b){
        if(a>b){
                //c,a,b
            total1 = (b-a);
            total2 = (a-c);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
        else{
                //c,b,a
            total1 = (a-b);
            total2 = (b-c);
            if(total1==total2){
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }
    }
    else if(a==b==c){
        cout<<"Yes";
    }


    return 0;

}
