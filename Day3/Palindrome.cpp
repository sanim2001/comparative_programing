#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;//12100
    cin>>a;

    int index1 = -1, index2 = a.size(),c=0;
    for(int i=a.size()-1; i>=0;i--){
        if(a[i]!='0'){
            break;
        }
        else{
            c++;//1--2
            index2 = i;//4--3
        }
    }
    for(int i=0; i<a.size();i++){
        if(a[i]!='0'){
            break;
        }
        else{
            c--;
            index1 = i;
        }
    }
    string b;
    for(int i=index1+1; i<index2; i++){
        b= b+a[i];//121
    }
    string s =b;
    reverse(s.begin(),s.end());
    if(a.size()==0){
        cout<<"Yes";
    }
    else if(c>=0 && b==s){
         cout<<"Yes";
    }
    else{
         cout<<"No";
    }

    return 0;


}
