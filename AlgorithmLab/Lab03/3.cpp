#include <bits/stdc++.h>
using namespace std;


void KMP_ARR (char a [], int SIZE_a, int nw []) {

    int b1 = SIZE_a;
    int l = 0;
    nw [0] = 0;
    for (int i = 1; i < b1; i++) {
        if (a [i] == a [l]) {
            l++;
            nw[i]= l;
        }
        else {
            nw[i] = 0;
            l = 0;
        }
    }
    for (int i = 0; i < b1; i++) {

        cout << nw [i] << " ";
    }
}

void KMP_ALGO (char a []) {
    int SIZE_a = strlen (a);
    int nw [SIZE_a];
    KMP_ARR (a,SIZE_a, nw);
}


int main () {
    char a[1000000];
    cin >> a;
    KMP_ALGO (a);
}

