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
    string userType;
    cin>>userType;
    for(int i=0; i<n ; i++){
        if(userType == ptr->type){
            //cout<<"Product : "<<i+1<<endl;
            int result = 0;
            result = ptr ->quantity * ptr ->price;
            cout<<"Total Asset of that Type: "<<result<<endl;
        }

        ptr++;
    }

}
//1
//111 sanim samsung food 2 300

