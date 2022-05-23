#include<bits/stdc++.h>
using namespace std;

int main(){


    int pow,ran;
    int flag = 1;
    cin>>pow>>ran;
    pair<int,int> arr[1000];
    for(int i=0; i<ran; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    //sort(arr,arr+ran);
    for(int i=0; i<ran; i++){
        if(pow<=arr[i].first){
            flag = 0;
            break;
        }
        else{
            pow = pow+ arr[i].second;
        }
    }
    if(flag==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;

}
