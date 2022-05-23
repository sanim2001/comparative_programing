#include<iostream>
using namespace std;
int main(){

    long long m,n;
    cin>>m>>n;
    long long rem1,rem2,rem;
    rem1 = m%10;
    rem2 = n%10;
    rem = rem1+rem2;
    cout<<rem;
    return 0;
}
