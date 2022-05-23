#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Enter two Num: ";
    double num1;
    cin>>num1;
    double num2;
    cin>>num2;
    double sum,sub,mul,div;
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    cout<<showpoint;
    cout<<setw(20)<<"Summation: "<<sum<<endl;
    cout<<noshowpoint;
    cout<<setw(20)<<"Subtraction: "<<sub<<endl;
    cout<<setw(20)<<"Mul: "<<mul<<endl;
    cout<<setw(20)<<"Division: "<<div<<endl;
    return 0;
}
