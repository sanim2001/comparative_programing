#include<bits/stdc++.h>
using namespace std;
int p,q,r,s,t,u;
double f(double x1){
    return p*exp(-x1) + q*sin(x1) + r*cos(x1) + s*tan(x1) + t*x1*x1 + u;
}
double bisection(){

    double y=1,x=0;
    while(x + (1e-7)<y){
        double d=(x+y)/2;
        if(f(x)*f(d)<=0){
            y=d;
        }else{
            x=d;
        }
    }
    return (x+y)/2;
}
int main(){

    while(cin>>p>>q>>r>>s>>t>>u){
        if(f(0)*f(1)>0){
            cout<<"No solution"<<"\n";
        }
        else{
            printf("%.4lf\n",bisection());

        }
    }
}
