#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int c;
        cin>>c;
        vector<int> v;
        double sum =0;
        int minn = INT_MIN;
        for(int i=0; i<c; i++){
            int x;
            cin>>x;
            v.push_back(x);
            sum = sum+x;
            if(x>minn){
                minn = x;
            }
        }
        double s = minn;
        double res = (sum-minn)/(c-1);
        cout<<fixed<<setprecision(9)<<(s+res)<<endl;
    }

}
