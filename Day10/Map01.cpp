#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> marks;
    marks["sanim"]=22;
    marks["sujana"]=23;
    marks["sowad"]=24;
    marks["papa"]=25;
    marks["Maa"]=24;

    for(auto &x:marks){
        cout<<x.first<<" "<<x.second<<endl;
    }
    map<string, int> :: iterator iter;
    for(iter = marks.begin(); iter!=marks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<7/2;
}
