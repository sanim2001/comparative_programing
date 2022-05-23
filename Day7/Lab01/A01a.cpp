#include<bits/stdc++.h>
using namespace std;

struct product{
    int id;
    string name;
    string brandName;
    string type;
    int quantity,price;
};

int main(){
    int n;
    cin>>n;
    product p1[n];
    for(int i=0; i<n ; i++){
        cin>>p1[i].name>>p1[i].price;
    }
    for(int i=0; i<n ; i++){
        if(p1[i].price>40){
            cout<<"Name: "<<p1[i].name<<" "<<"price: "<<p1[i].price<<endl;
        }
    }

}

