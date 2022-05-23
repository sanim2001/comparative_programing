#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char temp = s[0];
    s[0] = s[1];
    s[1] = s[2];
    s[2] = temp;

    cout << s;
    return 0;
}
