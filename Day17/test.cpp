#include<bits/stdc++.h>
using namespace std;
#define     fi(i,a,b)         for(int i=a;i<b;i++)
int main(){

  map<int,multiset<string>>mp;

  fi(){
    cin>>name>>result;
    mp[-1*res].insert(name);
  }
  for(auto &x:mp){
    auto &na = x.second;
    int num = x.first;
    for(auto nn: name)
        cout<<nn<<""<<1*num
  }

}
