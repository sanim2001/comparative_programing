#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    cout<<min(min(b*c/g,d*e),f/h)/a<<endl;
    return 0;
}
