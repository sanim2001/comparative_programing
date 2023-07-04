#include<bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin>>s;
    string s1 = s;
    sort(s.begin(),s.end());
    if(s[0]==s.back()){
        cout<<-1<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
}
int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}

