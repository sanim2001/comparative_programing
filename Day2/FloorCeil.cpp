#include<iostream>
#include<math.h>
using namespace std;
int main(){

    double a,b,result;

    cin>>a>>b;
    double f,c,r;
    result = a/b;
    f = floor(result);
    c = ceil(result);
    r = round(result);

    cout<<"floor "<<a<<" / "<<b<<" = "<<f<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;
    return 0;
}

