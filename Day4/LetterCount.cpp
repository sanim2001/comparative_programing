#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[11]{0};
    int count[26]{0};

    for(int i=0; i<n; i++){
        cin>>ch[i];
        count[ch[i]-'a']++;
    }
    for(int i=0; i<n; i++){
        char c = 'a'+i;
        cout<<c<<" "<<count[i]<<endl;
    }
}
