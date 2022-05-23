#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int y = n/365;
    cout<<y<<" years"<<endl;
    int m = (n-(365*y))/30;
    cout<<m<<" months"<<endl;
    int d = n-((365*y)+(30*m));
    cout<<d<<" days"<<endl;

    return 0;
}
