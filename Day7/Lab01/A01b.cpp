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
    product *ptr;
    ptr = new product[n*sizeof(product)];

    for(int i=0; i<n ; i++){
        cin>>ptr ->id>>ptr ->name>>ptr ->brandName>>ptr ->type>>ptr ->quantity>>ptr ->price;
        ptr++;
    }
    ptr-=n;
    for(int i=0; i<n ; i++){
        cout<<"Product : "<<i+1<<endl;
        cout<<"Id: "<<ptr ->id<<endl;
        cout<<"Name: "<<ptr ->name<<endl;
        cout<<"BrandName: "<<ptr ->brandName<<endl;
        cout<<"Type: "<<ptr ->type<<endl;
        cout<<"Quantity: "<<ptr ->quantity<<endl;
        cout<<"Price: "<<ptr ->price<<endl;
        cout<<endl;
        ptr++;
    }

}


