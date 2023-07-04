#include <bits/stdc++.h>
using namespace std;


void KMP_ARR (char a [], char b [], int SIZE_b, int nw []) {

    int b1 = SIZE_b;
    int l = 0;
    nw [0] = 0;
    for (int i = 1; i < b1; i++) {
        if (b [i] == b [l]) {
            l++;
            nw[i]= l;
        }
        else {
            nw[i] = 0;
            l = 0;
        }
    }
}

void KMP_ALGO (char a [], char b []) {

    int SIZE_a = strlen (a);
    int SIZE_b = strlen (b);

    int nw [SIZE_b];

    KMP_ARR (a, b, SIZE_b, nw);

    int i = 0, j = 0;

    while (i < SIZE_a) {

        if (b [j] == a [i])i++,j++;
        else{
            if (j != 0)j = nw [j - 1];
            else i++;

        }

        if (j == SIZE_b) {
            cout << i - j << " " << i - 1 <<"\n";
            j = nw [j - 1];
        }
    }
}


int main () {

    char a[1000000];
    char b[1000000];

    cin >> a>> b;
    KMP_ALGO (a, b);
}
