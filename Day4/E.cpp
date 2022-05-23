#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    for(int k=0;k<n; k++){

        int a[26]{0};
        char c[201]{0};
        char l[26];
        int m = 0;
        cin.getline(c,200);

        for(int i=0; i<26; i++){
            l[i] = 97+i;
        }
        for (int i=0; i<strlen(c); i++){
            c[i]=tolower(c[i]);
            for(int j=0; j<26; j++){
                if(c[i]==l[j]){
                    a[j]++;
                }
            }
        }
        for(int j=0; j<26; j++){
            if(a[j]>m){
                m = a[j];
            }
        }
        for(int j=0; j<26; j++){
            if(a[j]==m){
                cout<<l[j];
            }
        }
        cout<<endl;



    }
    return 0;

}
