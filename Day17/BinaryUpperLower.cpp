#include<bits/stdc++.h>
using namespace std;
int lower(vector<int> &v, int ch){
    int lo= 0, hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        mid  = (hi+lo)/2;
        if(v[mid]<ch) lo=mid+1;
        else hi=mid;
    }
    if(v[lo]>=ch) return lo;
    if(v[hi]>=ch) return hi;
    return -1;
}
int upper(vector<int> &v, int ch){
    int lo= 0, hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        mid  = (hi+lo)/2;
        if(v[mid]<=ch) lo=mid+1;
        else hi=mid;
    }
    if(v[lo]>ch) return lo;
    if(v[hi]>ch) return hi;
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ch;
    cin>>ch;
    int res = lower(v,ch);
    int res1 = upper(v,ch);
    cout<<res<<"\n";
    cout<<res1<<"\n";
}
