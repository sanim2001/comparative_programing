#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;

     while(n--){
        int a;
        cin>>a;
        vector<int> v;
        int x=1;
        while(v.size()<=a){
            if(x%3!=0 && x%10!=3){
                v.push_back(x);
            }
            x++;
        }
        cout<<v[a-1]<<endl;

     }

     return 0;
}
