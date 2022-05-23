#include <cstdio>
#include <string>
#include <cctype>
#include <cstring>
#include <set>
#include <iostream>
using namespace std;
char word[5005];
string str;
set<string> dict;
int main() {
    char ch;
    int i = 0;
    bool out = false;
    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            word[i++] = tolower(ch);
            out = true;
        }
        else {
            word[i] = '\0';
            if (out) { str = word; dict.insert(str); out = false; }
            i = 0;
        }
    }
    for (auto x : dict)
        cout << x << endl;
}
