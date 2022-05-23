#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pie = 3.141592653;
    double r;
    cin>>r;
    cout << fixed << setprecision(9);
    cout<<pie*r*r<<endl;
    return 0;
}
