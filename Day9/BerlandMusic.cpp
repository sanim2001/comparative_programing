#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first,v[i].second=i;//1 2
        }
        string s;
        cin>>s;//10

        sort(v.begin(),v.end());//1 2
        int numn=n;//2
        for(int i=n-1; i>=0; i--){
            if(s[v[i].second]=='1'){
                v[i].first=numn;
                numn--;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[v[i].second]=='0'){
                v[i].first=numn;
                numn--;
            }
        }
        for(int i=n-1; i>=0; i--){
            swap(v[i].first,v[i].second);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;

    }

}

