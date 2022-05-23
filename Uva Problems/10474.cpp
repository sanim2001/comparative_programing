#include<bits/stdc++.h>
using namespace std;

int main(){

    int t=1;
    int n,q;
    while(cin>>n>>q, n||q){
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        cout<<"CASE# "<<t++<<":\n";
        while (q--)
        {
            int q1;
            cin >> q1;

            auto iter = lower_bound(a, a + n, q1);
            if (iter == a + n || *iter != q1)
                cout << q1 << " not found\n";
            else
                cout << q1 << " found at " << (iter - a) + 1 << '\n';
        }

    }
}
