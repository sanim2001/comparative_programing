#include <bits/stdc++.h>
using namespace std;

int main(){
        int M,N;
        cin>>M;
        cin>>N;
        int cell[M][N];
        for(int i=0; i<M; i++) {
            for(int j=0; j<N; j++){
                cin >> cell[i][j];
            }
        }

        int mn;
        int x=M+1, y=N+2;
        int a[x][y];

        for(int i=0; i<x; i++) {
            for(int j=0; j<1; j++) {
                a[i][j]=INT_MAX;
            }
        }

        for(int i=0; i<x; i++) {
            for(int j=y-1; j<y; j++) {
                a[i][j]=INT_MAX;
            }
        }

        for(int i=0; i<1; i++) {
            for(int j=1; j<y-1; j++) {
                a[i][j]=0;
            }
        }

        for(int i=1; i<x; i++) {
            for(int j=1; j<y-1; j++) {
                if(a[i-1][j-1] <= a[i-1][j] && a[i-1][j-1]<=a[i-1][j+1]) {
                    mn=a[i-1][j-1];
                }
                else if(a[i-1][j] <= a[i-1][j-1] && a[i-1][j]<=a[i-1][j+1]) {
                    mn=a[i-1][j];
                }
                else {
                    mn=a[i-1][j+1];
                }
                a[i][j]=cell[i-1][j-1]+mn;
            }
        }
        int ans = INT_MAX;
        for(int i=x-1;i<x;i++) {
            for(int j=1;j<y-1;j++) {
                if(a[i][j]<ans) {
                    ans=a[i][j];
                }
            }
        }
        cout<<ans<<endl;
}
