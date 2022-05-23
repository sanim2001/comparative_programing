#include<bits/stdc++.h>
using namespace std;

void century(int year)
{
    if (y <= 100)
        cout<<1;
        cout << "The year "<<y<<" is in the 1-st century.";

    else if (y % 100 == 0)
        cout << y/ 100 <<" century";
    else
        cout << y/ 100 + 1 << " century";
}

// Driven code
int main()
{
    int y;
    cin>>y;
    century(y);
    return 0;
}
